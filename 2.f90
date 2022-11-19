program zzz
implicit none
integer :: i,j,k
integer,parameter :: x=13,y=11
integer :: a(x,y)
open(unit=10,file="C:\Users\Lenovo\Desktop\map.dat",status="old")
read(10,*)((a(j,k),j=1,13),k=1,11)
write(*,*) "Total 35 points on path:"
do j=1,13
  do k=1,11
    if(a(j,k)==0) then
    call sub(j,k)
    end if
  end do
end do
stop
end    

subroutine sub(j,k)
implicit none
integer :: j,k
write(*,"('(',i2,',',i2,')','=>')",advance='no')  j,k
return
end