USE dummydb;

SELECT *
FROM employees;
SELECT *
FROM departments;


SELECT employees.first_name,departments.department_name
FROM employees,departments
WHERE employees.department_id = departments.department_id;


SELECT employees.first_name, departments.department_name
FROM employees 
	JOIN departments ON employees.department_id = departments.department_id;


SELECT employees.first_name, departments.department_name
FROM employees
	JOIN departments using(department_id);


SELECT employees.first_name , departments.department_name
FROM employees
	LEFT JOIN departments ON employees.department_id = departments.department_id;


SELECT employees.first_name , departments.department_name
FROM employees
	RIGHT JOIN departments ON employees.department_id = departments.department_id;
    
    
SELECT employees.first_name , departments.department_name
FROM employees
	CROSS JOIN departments ON employees.department_id = departments.department_id;


SELECT m.first_name , e.first_name 
FROM employees AS e
	JOIN employees AS m 
    ON e.employee_id = m.manager_id;


SELECT departments.department_name
FROM departments
	LEFT JOIN employees
		ON departments.department_id = employees.department_id
WHERE employees.department_id IS NULL;


SELECT 
	employees.first_name, 
	employees.salary, 
    (SELECT AVG(salary) FROM employees WHERE department_id = employees.department_id) - employees.salary
FROM employees
	JOIN departments
		ON employees.department_id = departments.department_id;
        

SELECT departments.department_name,MIN(salary)
FROM employees
	JOIN departments
		ON employees.department_id = departments.department_id
GROUP BY department_name
HAVING MIN(salary)>1000;
		
        


















