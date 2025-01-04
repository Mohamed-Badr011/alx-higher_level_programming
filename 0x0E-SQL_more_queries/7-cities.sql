-- creates the database hbtn_0d_usa and the table cities (in the database hbtn_0d_usa) on your MySQL server.
-- CREATE DATABASE
CREATE DATABASE IF NOT EXISTS hbtn_0d_usa;
-- TURN TO NEW DATA BASE
USE hbtn_0d_usa;
-- CREATE TABLE
CREATE TABLE IF NOT EXISTS cities(
	id INT UNIQUE AUTO_INCREMENT NOT NULL,
	state_id INT NOT NULL,
	name VARCHAR(256) NOT NULL,
	PRIMARY KEY(id),
	FOREIGN KEY(state_id) REFERENCES states(id));
