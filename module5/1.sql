create database college;

use college;

create table student( rollno int primary key,name text,branch text);

insert into student values
(1,"jay","computer science"),
(2,"suhani","electronic & computer"),
(3,"kriti","electronic & computer");

select * from student;

CREATE TABLE exam (
    s_code VARCHAR(50),
    marks INT,
    p_code VARCHAR(50),
    rollno INT, 
    FOREIGN KEY (rollno) REFERENCES student(rollno)
);

select * from exam;

insert into exam values
("cs11",50,"cs",1),
("cs12",60,"cs",1),
("ec101",66,"ec",2),
("cs102",70,"ec",2),
("cs101",45,"ec",3),
("cs102",50,"ec",3);

