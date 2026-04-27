USE sectionA;

UPDATE Drivers SET BaseSalary = BaseSalary + BaseSalary * 0.12 
WHERE
VehicleType = 'Van' AND JoinDate < '2022-01-01';

-- 2
SELECT UPPER(DriverName) AS DriverName, DATEDIFF(MM, JoinDate, CURRENT_TIMESTAMP) AS Experience FROM 
Drivers;

-- 3
SELECT TripID, DestinationCity, ROUND(TripFare + TripFare * 0.15, 0) As FestivalBonus
    FROM
Triplogs WHERE DistanceKM > 300;

-- 4
SELECT COUNT(TripID) AS TotalTrip, MAX(TripFare), DestinationCity
FROM Triplogs
GROUP BY DestinationCity
HAVING MAX(TripFare) > 5500;

-- 5
ALTER TABLE Drivers
    ADD CONSTRAINT UNQ_ContactNumber UNIQUE (ContactNumber);

ALTER TABLE Drivers
    ADD CONSTRAINT LT_BaseSalary CHECK(BaseSalary > 10000);


INSERT INTO Drivers (DriverID, DriverName, VehicleType, ContactNumber, JoinDate, BaseSalary)
VALUES 
(111, 'Ahmed Ali', 'Truck', '11711223344', '2019-05-12', 90000);