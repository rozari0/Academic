USE secB;

-- 1
SELECT BaseSalary * 1.12 AS IncreasedSalary FROM Drivers
    WHERE
VehicleType = 'Van' AND JoinDate < '2022-01-01';

-- 2

SELECT UPPER(DriverName) AS DriverName, DATEDIFF(MM, JoinDate, CURRENT_TIMESTAMP) AS JoinedMonth FROM Drivers;

-- 3
SELECT TripID, DestinationCity, ROUND(TripFare * 1.15, 0) FROM Triplogs 
WHERE
DistanceKM >= 300;

-- 4
SELECT COUNT(TripID) AS TotalTrip, DestinationCity, MAX(TripFare) AS MaxTripFare
FROM Triplogs
GROUP BY DestinationCity
HAVING MAX(TripFare) > 5500;

-- 5
ALTER TABLE Drivers
    ADD CONSTRAINT UQ_Contact UNIQUE (ContactNumber);

ALTER TABLE Drivers
    ADD CONSTRAINT NLT_Salary CHECK(BaseSalary >= 10000);

