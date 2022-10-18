#pragma once

#include <iostream>
#include <chrono>
#include <ctime>


using namespace std::chrono;
system_clock::time_point p = system_clock::now();
std::time_t t = system_clock::to_time_t(p);
auto currentTime = std::ctime(&t);


/*Turn UTC time tt into string to be able to do operations on it*/
std::string DateTime(std::ctime(&t));


/*Grab value of current hour. First value respresents the number or postion of chars upto where youll start grabbing contents.
 * Second value reprents the number of chars you will be grabbing*/

std::string Hour = DateTime.substr(11,2);


/*convert hour(string) to int to be able to use logical operator on it
*/
int FinalHour = std::stoi(Hour);

/*Grab characters representing current day*/
std::string Day = DateTime.substr(0,3);
std::string dayLabelIcon = "image: url(:/icons/date/day-"+Day+".png);";
/*Grab characters respresenting current date*/
std::string Date = DateTime.substr(8,2);
//std::cout<<Date.size()<<std::endl;

//if(Date.size() !=2) {
//	std::cout<<"rrr"<<std:endl;

std::string dateLabelIcon = "image: url(:/icons/date/date-"+Date+".png);";






