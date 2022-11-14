program zzr
  implicit none
  real, external :: gettemp2
  integer,parameter :: l=13,h=10,im=11,jm=9
  integer :: i,j,ii,jj,m,n,p,q
  real :: xi(l),yi(h),temp2(l,h),x(im), y(jm), temp1(im,jm)
  real :: x0,y0,t0
  open(10,file='xyts.dat',status='old',action='read')
  read(10,*)
  read(10,*)x
  read(10,*)
  read(10,*)y
  read(10,*)
  read(10,*)((temp1(i,j),i=1,im),j=1,jm)
  read(10,*)
  read(10,*)xi
  read(10,*)
  read(10,*)yi
  close(10)
  do q=1,l
    x0=xi(q)
    do p=1,h
      y0=yi(p)
      ii=min(maxloc(x,1,x<=x0),im-1)
      jj=min(maxloc(y,1,y<=y0),jm-1)
      temp2(q,p)=gettemp2(x(ii),x(ii+1),y(jj),y(jj+1), &
                  temp1(ii,jj),temp1(ii,jj+1),temp1(ii+1,jj),temp1(ii+1,jj+1), &
                  x0, y0)                          
    end do
  end do  
  write(*,'(77("-"))')
  write(*,'("yi\xi| ",13f5.1)')xi           
  do n=1,h
    write(*,'(f5.1,"|",13(f5.1))') yi(n),(temp2(m,n),m=1,l)
  end do  
  write(*,'(77("-"))')
  stop
  end

real function gettemp2(x1,x2,y1,y2,t11,t12,t21,t22,x,y)
  implicit none
  real, external :: gettemp1
  real :: x1, x2, y1, y2
  real :: t11,t12,t21,t22
  real :: x,y,t1,t2
  t1=gettemp1(x1,x2,t11,t21,x)
  t2=gettemp1(x1,x2,t12,t22,x)
  gettemp2=gettemp1(y1,y2,t1,t2,y)
  return
end function

real function gettemp1(x1,x2,y1,y2,x)
  implicit none
  real :: x1,x2,y1,y2,x
  gettemp1=y1+(y2-y1)*(x-x1)/(x2-x1)
  return
end function