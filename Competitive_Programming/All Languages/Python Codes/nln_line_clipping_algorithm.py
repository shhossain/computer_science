import turtle as t 

xmin,ymin,xmax,ymax=0,0,0,0

def clipline1(p,x1,y1,x2,y2):
    draw=1
    m,m1,m2,m3,m4=0,0,0,0,0
    nx1,ny1,nx2,ny2=0,0,0,0
    m=((y2-y1))/(x2-x1)
    m1=((ymin-y1))/(xmin-x1)
    m2=((ymin-y1))/(xmax-x1)
    m3=((ymax-y1))/(xmax-x1)
    m4=((ymax-y1))/(xmin-x1)
    nx1=x1
    ny1=y1
    if(((abs(m)>=m1 and x2<x1) or (abs(m)>abs(m2) and x2>x1)) and y1>y2):
          if(y2>ymin):
              nx2=x2
              ny2=y2
          else:
              ny2=ymin
              nx2=x1+(ymin-y1)/m
    elif(m>m2 and m<m3 and x2>=xmax):
        if(x2<xmax):
            nx2=x2
            ny2=y2
        else:
            nx2=xmax
            ny2=y1+(xmax-x1)*m
    elif((abs(m)>=m3 and x2>x1) or (abs(m)>abs(m4) and x2<x1)):
        if(y2<ymax):
            nx2=x2
            ny2=y2
        else:
            ny2=ymax
            nx2=x1+(ymax-y1)/m
    elif(m>m4 and m<m1):
        if(x2>xmin):
            nx2=x2
            ny2=y2
        else:
            nx2=xmin
            ny2=y1+(xmin-x1)*m
    else:
        draw=0
    if draw:
        p.color('red')
        makeLine(nx1,ny1,nx2,ny2)

def clipline2(p,x1,y1,x2,y2):
    draw=1
    m,m1,m2,m3,m4=0,0,0,0,0
    nx1,ny1,nx2,ny2=0,0,0,0

    m=((y2-y1))/(x2-x1)
    m1=((ymin-y1))/(xmin-x1)
    m2=((ymin-y1))/(xmax-x1)
    m3=((ymax-y1))/(xmax-x1)
    m4=((ymax-y1))/(xmin-x1)

    if(m>m1 and m<m2):    
        if(y2>ymin):        
            nx1=xmin
            ny1=y1+m*(xmin-x1)
            nx2=x2
            ny2=y2        
        else:        
            nx1=xmin
            ny1=y1+m*(xmin-x1)
            ny2=ymin
            nx2=x1+(ymin-y1)/m      
    
    elif(m>m2 and m<m3):    
        if(x2<xmax):        
            nx1=xmin
            ny1=y1+m*(xmin-x1)
            nx2=x2
            ny2=y2        
        else:        
            nx1=xmin
            ny1=y1+m*(xmin-x1)
            nx2=xmax
            ny2=y1+(xmax-x1)*m        
    
    elif(m>m3 and m<m4):    
        if(y2<ymax):        
            nx1=xmin
            ny1=y1+m*(xmin-x1)
            nx2=x2
            ny2=y2
        
        else:        
            nx1=xmin
            ny1=y1+m*(xmin-x1)
            ny2=ymax
            nx2=x1+(ymax-y1)/m   
    else:
        draw=0

    if(draw):
        p.color('red')
        makeLine(p,nx1,ny1,nx2,ny2)
    

def clipline3(p,x1,y1,x2,y2):
    draw=1
    m,m1,m2,m3,m4,tm1,tm2=0,0,0,0,0,0,0
    nx1,ny1,nx2,ny2=0,0,0,0
    flag,t=0,0

    tm1=((ymin-y1))/(xmin-x1)
    tm2=((ymax-ymin))/(xmax-xmin)

    m=((y2-y1))/(x2-x1)
    m1=((ymin-y1))/(xmax-x1)
    m2=((ymax-y1))/(xmax-x1)
    m3=((ymin-y1))/(xmin-x1)
    m4=((ymax-y1))/(xmin-x1)

    if(tm1<tm2):    
        flag=2
        t=m2
        m2=m3
        m3=t    
    else:
        flag=1

    if(m>m1 and m<m2):    
        if(x2>xmax and y2>ymin):        
            ny1=ymin
            nx1=x1+(ymin-y1)/m
            nx2=xmax
            ny2=y1+m*(xmax-x1)
        
        elif(y2>ymin and x2<xmax):        
            ny1=ymin
            nx1=x1+(ymin-y1)/m
            ny2=y2
            nx2=x2
        
    
    elif(m>m2 and m<m3):    
        if(flag==1):        
            if(y2>=ymax):               
                ny1=ymin
                nx1=x1+(ymin-y1)/m
                nx2=x1+(ymax-y1)/m
                ny2=ymax
               
            elif(y2>=ymin):            
                ny1=ymin
                nx1=x1+(ymin-y1)/m
                nx2=x2
                ny2=y2
        else:        
            if(x2>=xmax):               
                   nx1=xmin
                   ny1=y1+m*(xmin-x1)
                   nx2=xmax
                   ny2=y1+m*(xmax-x1)   
            elif(x2>=xmin):
                nx1=xmin
                ny1=y1+m*(xmin-x1)
                nx2=x2
                ny2=y2

    elif(m>m3 and m<m4):
        if(y2>=ymax):        
            nx1=xmin
            ny1=y1+m*(xmin-x1)
            nx2=x1+(ymax-y1)/m
            ny2=ymax        
        elif(y2>=ymin):        
            nx1=xmin
            ny1=y1+m*(xmin-x1)
            ny2=y2
            nx2=x2
    else:
        draw=0

    if(draw):
        makeLine(p,nx1,ny1,nx2,ny2)
    
        
def make_rect(p,x,y,x1,y1): 
    p.penup()
    p.goto(x,y)
    p.pendown() 
    p.goto(x1,y) 
    p.goto(x1,y1) 
    p.goto(x,y1)
    p.goto(x,y)

def makeLine(p,x1,y1,x2,y2):
    p.penup()
    p.goto(x1,y1)
    p.pendown()
    p.goto(x2,y2)

def first_end_point_region(x,y):
    if(x>=xmin and x<=xmax and y>=ymin and y<=ymax):
        return 1
    elif(x<xmin and y>=ymin and y<=ymax):
        return 2
    elif(x<=xmin and y<=ymin):
        return 3
    else:
         return 0

screen=t.Screen() 
p=t.Turtle() 
p.shapesize(0.1) 
p.speed("fastest") 
p.shape("circle")
xmin=int(input("Enter X-Min: "))
ymin=int(input("Enter Y-Min: "))
xmax=int(input("Enter X-Max: "))
ymax=int(input("Enter Y-Max: "))

make_rect(p,xmin,ymin,xmax,ymax)
x1,y1=map(int,input("Enter x and y coordinates of first point: ").split())
x2,y2=map(int,input("Enter x and y coordinates of second point: ").split())
p.color('blue')
makeLine(p,x1,y1,x2,y2)

input("Press enter to clip")
p.clear()
p.color('black')
make_rect(p,xmin,ymin,xmax,ymax)
p.color('red')

ch=first_end_point_region(x1,y1)
if ch==1:
    clipline1(p,x1,y1,x2,y2)
elif ch==2:
    clipline2(p,x1,y1,x2,y2)
elif ch==3:
    clipline3(p,x1,y1,x2,y2)
else:
    print("\nInvalid select of the option: ")

p.color('red')
screen.exitonclick()
