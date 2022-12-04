program zzz
implicit none
integer :: a,b,r
call gcd(a,b,r)
stop
end

subroutine gcd(a,b,r)
implicit none
integer :: a,b,r
a=36
b=270
do while(mod(a,b)/=0) 
r=mod(a,b)
a=b
b=r
end do
write(*,"('36和270的最大公约数是',i2)") b
return
end 