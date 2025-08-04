USE dummydb;

SELECT 
	e.first_name AS Employee_Name,
    m.first_name AS Manager_name
FROM employees AS e
	JOIN employees AS m
    ON e.manager_id = m.employee_id;
    
SELECT *
FROM employees;

CREATE DATABASE assignment_2;

USE assignment_2;

CREATE TABLE employees(
	employee_id CHAR(4) PRIMARY KEY,
    first_name VARCHAR(20) NOT NULL,
    last_name VARCHAR(20) NOT NULL,
    date_of_birth DATE,
    department_id CHAR(3),
    salary DECIMAL
    );
    
CREATE TABLE projects(
	project_id CHAR(5) PRIMARY KEY,
    project_name VARCHAR(20) NOT NULL,
    start_date DATE,
    end_date DATE,
    budget DECIMAL
	);
    
CREATE TABLE employee_projects(
	employee_id CHAR(4),
    project_id CHAR(5),
    PRIMARY KEY (employee_id,project_id),
    FOREIGN KEY (employee_id) REFERENCES employees(employee_id),
    FOREIGN KEY (project_id) REFERENCES projects(project_id)
	);
    
USE dummydb;  

SELECT *
FROM employees; 

SELECT salary AS THIRD_HIGHEST_SALARY
FROM employees
WHERE salary = (SELECT MAX(salary)
				FROM employees
                WHERE salary<(SELECT MAX(salary)
								FROM employees
								WHERE salary < (SELECT MAX(salary)
												FROM employees))); 


SELECT 
	COUNT(employees.employee_id) AS number_of_member,
    departments.department_name AS department
FROM employees
	JOIN departments ON employees.department_id = departments.department_id
GROUP BY departments.department_name;

SELECT *
FROM departments;


SELECT 
	e.employee_id AS Employee,
	d.department_id AS Department_Id
FROM employees AS e
	JOIN departments AS d ON e.department_id = d.department_id; 
    

SELECT 
	e.employee_id AS Employee,
    d.department_id AS Department_ID
FROM employees AS e
	LEFT JOIN departments AS d ON e.department_id = d.department_id;
    
SELECT 
	e.employee_id AS Employee,
    d.department_id AS Department_ID
FROM employees AS e
	RIGHT JOIN departments AS d ON e.department_id = d.department_id;
    
SELECT 
	e.employee_id AS Employee,
    d.department_id AS Department_ID
FROM employees AS e
	CROSS JOIN departments AS d;
    
WITH temp AS
(
	SELECT first_name
    FROM employees
    WHERE salary>(SELECT AVG(salary)
				  FROM employees)
)
SELECT *
FROM temp;



SELECT first_name
FROM employees
WHERE salary<(SELECT salary
			  FROM employees
              WHERE first_name = 'Steven' AND last_name ='King');

USE dummydb;

SELECT *
FROM departments;

SELECT d.department_name,m.first_name
FROM employees AS m
	JOIN departments AS d 
	ON d.manager_id = m.employee_id;

SELECT * 
FROM locations;
SELECT *
FROM departments;


SELECT l.city
FROM departments AS d
	JOIN locations AS l 
    ON d.location_id = l.location_id;












    
    
    
    
    
    
    
    
    
    