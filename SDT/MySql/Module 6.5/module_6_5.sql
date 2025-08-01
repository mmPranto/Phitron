USE dummydb;

SELECT * 
FROM employees
WHERE salary = (SELECT MAX(salary)
				FROM employees
                WHERE salary < (SELECT MAX(salary)
								FROM employees
                                WHERE salary < (SELECT MAX(salary)
												FROM employees)));
                                                
                                                
SELECT * 
FROM employees
WHERE salary = (SELECT MIN(salary)
				FROM employees
                WHERE salary > (SELECT MIN(salary)
								FROM employees
                                WHERE salary > (SELECT MIN(salary)
												FROM employees)));
                                                

SELECT *
FROM employees
WHERE hire_date > (SELECT hire_date
					FROM employees
                    WHERE first_name = 'STEVEN' and last_name = 'KING');
                    
                    
WITH first_highest AS
	(
		SELECT MAX(salary) as sal1
        FROM employees
    ),
    second_highest AS
    (
		SELECT MAX(salary) as sal2
        FROM employees
        WHERE salary < (SELECT sal1 FROM first_highest)
    ),
    third_highest AS
    (
		SELECT MAX(salary) as sal3
        FROM employees
        WHERE salary < (SELECT sal2 FROM second_highest )
    )
    SELECT * 
    FROM employees
    WHERE salary = (SELECT sal3 from third_highest);
    
    
WITH first_lowest AS
	(
		SELECT MIN(salary) as sal1
        FROM employees
    ),
    second_lowest AS
    (
		SELECT MIN(salary) as sal2
        FROM employees
        WHERE salary > (SELECT sal1 FROM first_lowest)
    ),
    third_lowest AS
    (
		SELECT MIN(salary) as sal3
        FROM employees
        WHERE salary > (SELECT sal2 FROM second_lowest )
    )
    SELECT * 
    FROM employees
    WHERE salary = (SELECT sal3 from third_lowest);
    
    
                                                
