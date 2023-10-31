#include <stdio.h>
#include <string.h>

// 省份代码和对应的省份名称
char* sf[] = {"未知","未知","未知","未知","未知","未知","未知","未知","未知","未知","未知","北京市", "天津市", "河北省", "山西省", "内蒙古自治区","未知","未知","未知","未知","未知", "辽宁省", "吉林省", "黑龙江省","未知","未知","未知","未知","未知","未知","未知",
              "上海市", "江苏省", "浙江省", "安徽省", "福建省", "江西省", "山东省", "未知","未知","未知","河南省",
              "湖北省", "湖南省", "广东省", "广西壮族自治区", "海南省","未知","未知","未知","未知", "重庆市", "四川省", "贵州省",
              "云南省", "西藏自治区","未知","未知","未知","未知","未知","未知", "陕西省", "甘肃省", "青海省", "宁夏回族自治区", "新疆维吾尔自治区","未知","未知","未知","未知","未知", "台湾省","未知","未知","未知","未知","未知","未知","未知","未知","未知",
              "香港特别行政区", "澳门特别行政区"};

int check_id_card(const char* id_card) {
    int len = strlen(id_card);
    if (len != 18) {
        return 0;
    }

    // 校验码权重
    int weights[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    // 校验码字符集
    char check_codes[] = "10X98765432";

    int sum = 0;
    for (int i = 0; i < 17; i++) {
        if (id_card[i] < '0' || id_card[i] > '9') {
            return 0;  // 非数字字符，身份证号码无效
        }
        sum += (id_card[i] - '0') * weights[i];
    }

    int check_code_index = sum % 11;
    char expected_check_code = check_codes[check_code_index];
    char actual_check_code = id_card[17];

    if (expected_check_code == actual_check_code) {
        return 1;  // 身份证号码有效
    } else {
        return 0;  // 身份证号码无效
    }
}

// 提取身份证号中的信息
void extract_info(const char* id_card) {
    if (!check_id_card(id_card)) {
        printf("请检查身份证合法性\n");
        return;
    }

    char province_code[3];
    strncpy(province_code, id_card, 2);
    province_code[2] = '\0';

    int province_index = atoi(province_code);
    if (province_index < 1 || province_index > 82) {
        printf("未知省份\n");
        return;
    }

    char* province = sf[province_index];

    char year[5], month[3], day[3];
    strncpy(year, id_card + 6, 4);
    year[4] = '\0';
    strncpy(month, id_card + 10, 2);
    month[2] = '\0';
    strncpy(day, id_card + 12, 2);
    day[2] = '\0';

    int age = 2023 - atoi(year) - 1;

    int gender_code = id_card[16] - '0';
    char* gender = (gender_code % 2 == 1) ? "男" : "女";

    printf("%s %c%c %c%c %d岁 %s\n", province, id_card[2],id_card[3],id_card[4],id_card[5],age,gender);
}

int main() {
    char id_card[19];
    scanf("%s", id_card);

    if (check_id_card(id_card)) {
        printf("校验成功身份证有效\n");
        extract_info(id_card);
    } else {
        printf("请检查身份证合法性\n");
    }

    return 0;
}