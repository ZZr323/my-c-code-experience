program zzz
implicit none
integer,parameter :: p=1,q=2,m=3,n=4
integer :: A(4),B(4)=0,C(4)=0
data A/p,q,m,n/
write(*,*) A(1:4)
call sub1()
stop
end

subroutine sub1()
implicit none 
integer :: A(4),B(4)=0,C(4)=0
data A/1,2,3,4/
B(4:4)=A(1:1)
C(4:4)=A(2:2)
C(3:3)=B(4:4)
B(4:4)=A(3:3)
A(3:3)=C(3:3)
B(3:3)=C(4:4)
B(2:2)=A(3:3)
C(4:4)=A(4:4)
C(3:3)=B(2:2)
A(4:4)=B(3:3)
A(3:3)=C(3:3)
C(3:3)=B(4:4)
B(4:4)=A(3:3)
C(2:2)=A(4:4)
C(1:1)=B(4:4)
write(*,*) C(1:4)
return
end