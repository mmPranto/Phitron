USE dummydb;

SELECT *
FROM employees;

SELECT * 
FROM jobs;
-- 1
SELECT employees.first_name,jobs.job_title
FROM employees,jobs
WHERE employees.job_id =jobs.job_id;
-- 2
SELECT employees.first_name,jobs.job_title
FROM employees 
	JOIN jobs ON employees.job_id =jobs.job_id;
-- 3
SELECT employees.first_name,jobs.job_title
FROM employees
	JOIN jobs ON employees.job_id =jobs.job_id
WHERE salary = (SELECT MAX(salary) FROM employees);
-- 4 
SELECT 
	e.first_name AS employee_name,
	m.first_name AS manager_name
FROM employees AS e
	JOIN employees AS m 
    ON e.manager_id = m.employee_id;


    