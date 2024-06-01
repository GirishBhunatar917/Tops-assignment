use college;

create table employee
( emp_id int primary key,
first_name varchar(50),
last_name varchar(50),
salary double not null, 
joining_date date,joining_time time,
department varchar(50)
);
CREATE TABLE viewtable (
    emp_id INT,
    first_name VARCHAR(50),
    last_name VARCHAR(50),
    salary DOUBLE,
    joining_date DATE,
    joining_time TIME,
    department VARCHAR(50)
);


insert into employee(emp_id,first_name,last_name,salary,joining_date,joining_time,department) 
values (1,"john","abraham",1000000,"2013-01-01","12:00:00","banking"),
       (2,"michael","clarke",800000,"2013-01-01","12:00:00 ","insurance"),
       (3,"Roy","Thomas",700000,"2013-02-01","12:00:00 ","banking"),
       (4,"Tom","Jose",600000,"2013-02-01","12:00:00 ","insurance"),
       (5,"Jerry","Pinto",650000,"2013-02-01","12:00:00","insurance"),
       (6,"philip","Mathew",750000,"2013-01-01","12:00:00","services"),
       (7,"Testname1","123",650000,"2013-01-01","12:00:00 ","services"),
       (8,"Testname2","Lname%",600000,"2013-02-01","12:00:00","insurance");
       
       select * from employee;
       
CREATE TABLE incentive (
    employee_ref_id int,
    incentive_date date,
    incentive_amount int,
    foreign key(employee_ref_id) references employee(emp_id)
);

insert into incentive(employee_ref_id,incentive_date,incentive_amount) 
values (1,"2013-02-01",5000),
       (2,"2013-02-01",3000),
       (3,"2013-02-01",4000),
       (1,"2013-01-01",4500),
       (2,"2013-01-01",3500);
       
select * from incentive;
       
select  first_name as employee_name from employee;

select first_name,joining_date,salary from employee;
       
select * from employee order by first_name asc;

select * from employee order by salary desc;
       
select * from employee 
where first_name like"%j%";
       
SELECT department, MAX(salary) AS max_salary
FROM employee
GROUP BY department
ORDER BY department;

select salary from employee order by salary asc;

SELECT e.first_name, i.incentive_amount
FROM employee e
INNER JOIN incentive i ON e.emp_id = i.employee_ref_id
WHERE i.incentive_amount > 3000;

DELIMITER $$

CREATE TRIGGER after_employee_insert_trigger
AFTER INSERT ON Employee
FOR EACH ROW
BEGIN
    INSERT INTO viewtable (emp_id, first_name, last_name, salary, joining_date, joining_time, department)
    VALUES (NEW.emp_id, NEW.first_name, NEW.last_name, NEW.salary, NEW.joining_date, NEW.joining_time, NEW.department);
END$$

DELIMITER ;

INSERT INTO Employee (emp_id, first_name, last_name, salary, joining_date, joining_time, department)
VALUES (10, 'Alice', 'Smith', 95000, '2024-05-30', '09:00:00', 'IT');

select * from viewtable;












       
       
       
       

    
       
