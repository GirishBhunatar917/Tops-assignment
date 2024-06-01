use college;

create table salesperson(
sno int primary key,
sname varchar(50),
city varchar(50),
com float
);

insert into salesperson() 
values
(1001,"peel","london",0.12),
(1002,"serres","san jose",0.13),
(1004,"motika","london",0.11),
(1007,"rafkin","barcelona",0.15),
(1003,"axerod","new york",0.10);

select * from salesperson;

create table customer (
cnm int primary key,
cname varchar(50),
city varchar(50),
rating int,
sno int,
foreign key(sno) references salesperson(sno));

insert into customer 
values(201,"hoffman","london",100,1001),
	(202,"Giovanne","Roe",200,1003),
    (203,"liu","san jose",300,1002),
    (204,"grass","barcelona",100,1002),
    (206,"clemens","london",300,1007),
    (207,"pereira","Roe",100,1004);
    
    select*from customer;
   
   SELECT *
FROM Customer
WHERE rating > 100;

SELECT sname,city
FROM Salesperson 
WHERE com > 0.12;

SELECT *
FROM Salesperson
WHERE city IN ('Barcelona', 'London');

SELECT *
FROM Salesperson
WHERE com > 0.10 AND com < 0.12;

SELECT *
FROM Customer
WHERE rating > 100 OR city = 'Roe';





    
    
    