-- CREATE DATABASE lab9;

CREATE TABLE workers
(
    WORKER_ID INT PRIMARY KEY NOT NULL,
    FIRST_NAME VARCHAR(30) UNIQUE,
    LAST_NAME VARCHAR(30),
    SALARY INT,
    DEPT_NAME VARCHAR(10),
    JOINING_DATE DATETIME,
    CHECK (SALARY > 100)
);

INSERT INTO workers
    (
    WORKER_ID, FIRST_NAME, LAST_NAME,
    SALARY, DEPT_NAME, JOINING_DATE
    )
VALUES
    (
        1, 'Rana', 'Hamid', 100000, 'HR', '2014-02-20 09:00:00'
  ),
    (
        2, 'Sanjoy', 'Saha', 80000, 'Admin',
        '2014-06-11 09:00:00'
  ),
    (
        3, 'Mahmudul', 'Hasan', 300000, 'HR',
        '2014-02-20 09:00:00'
  ),
    (
        4, 'Asad', 'Zaman', 500000, 'Admin',
        '2014-02-20 09:00:00'
  ),
    (
        5, 'Sajib', 'Mia', 500000, 'Admin',
        '2014-06-11 09:00:00'
  ),
    (
        6, 'Alamgir', 'Kabir', 200000, 'Account',
        '2014-06-11 09:00:00'
  ),
    (
        7, 'Foridul', 'Islam', 75000, 'Account',
        '2014-01-20 09:00:00'
  ),
    (
        8, 'Kesob', 'Ray', 90000, 'Admin', '2014-04-11 09:00:00'
  );


SELECT FIRST_NAME, CONVERT(DECIMAL(10, 2), SALARY/ 120) as  SAL,
        CONVERT(VARCHAR, JOINING_DATE, 101) AS FORMATED_JOINING_DATE
FROM workers;