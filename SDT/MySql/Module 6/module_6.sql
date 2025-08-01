USE dummydb;

SELECT *
FROM employees
WHERE employee_id = 144;


SELECT *
FROM employees
WHERE salary < (SELECT salary
				FROM employees
				WHERE employee_id = 144
                );



SELECT * 
FROM employees
WHERE salary = (SELECT MAX(salary)
				FROM employees
                );
                
SELECT *
FROM departments;

SELECT *
FROM employees;


SELECT *
FROM employees
WHERE department_id = (SELECT department_id
						FROM departments
                        WHERE department_name = 'MARKETING'
                        );
                        
SELECT AVG(salary)
FROM employees
WHERE department_id = (SELECT department_id
						FROM departments
                        WHERE department_name = 'marketing'
						);

SELECT MAX(salary)
FROM employees
WHERE department_id = (SELECT department_id
						FROM departments
                        WHERE department_name = 'marketing'
						);
                        
SELECT MIN(salary)
FROM employees
WHERE department_id = (SELECT department_id
						FROM departments
                        WHERE department_name = 'marketing'
						);
                        
SELECT COUNT(*) AS Members
FROM employees
WHERE department_id = (SELECT department_id
						FROM departments
                        WHERE department_name = 'IT'
						);

SELECT *
FROM employees
WHERE job_id = (SELECT job_id
				FROM jobs
                WHERE job_title = 'Programmer');
                

SELECT SUM(salary)
FROM employees
WHERE job_id = (SELECT job_id
				FROM jobs
                WHERE job_title = 'Programmer');
                

SELECT DISTINCT salary 
FROM employees
ORDER BY salary DESC
LIMIT 1
OFFSET 1;


SELECT *
FROM employees
WHERE salary = (SELECT DISTINCT salary 
				FROM employees
				ORDER BY salary DESC
				LIMIT 1
				OFFSET 1);
                
SELECT MAX(salary)
FROM employees;

SELECT *
FROM employees
WHERE salary = ((SELECT MAX(salary)
				FROM employees
				WHERE salary < (SELECT MAX(salary)
								FROM employees)));
                
SELECT * 
FROM employees as EMP
WHERE salary > (SELECT salary
				FROM employees as MGR
                WHERE emp.manager_id = mgr.employee_id);
                
SELECT *
FROM employees as EMP
WHERE job_id = (SELECT job_id
				FROM employees as MGR
                WHERE emp.manager_id = mgr.employee_id);
                
                



WITH TEMP AS
(
SELECT * 
FROM employees
LIMIT 5
)
SELECT *
FROM TEMP;


WITH AVGIT AS
		(
			SELECT AVG(salary) AS SAL1
			FROM employees
			WHERE department_id = 60
		),  -- it department
	MAXMKT AS
		(
			SELECT MAX(salary) AS SAL2
			FROM employees
			WHERE department_id = 20
		)   -- marketing department
        
        SELECT *
        FROM employees 
        WHERE salary > (SELECT SAL1 FROM AVGIT) AND salary < (SELECT SAL2 FROM MAXMKT); 










