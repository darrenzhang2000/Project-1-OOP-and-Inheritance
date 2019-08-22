#include "Person.hpp"
#include <iostream>
#include "Student.hpp"
#include "TeachingAssistant.hpp"
#include "Instructor.hpp"

int main(){
	Person me = Person(1,"Darren", "Zhang");
	std::cout << me.getFirstName() << std::endl;
	
	Student Darren = Student(2, "Darren", "Zhang");
	Darren.setMajor("Computer Science");
	Darren.setGpa(5);
	std::cout << Darren.getMajor() << std::endl;
	std::cout << Darren.getGpa() << std::endl;
	
	TeachingAssistant Bob = TeachingAssistant(6, "Bob", "Bobby");
	Bob.setHours(10);
	std::cout << Bob.getHours() << std::endl;
	Bob.setRole(LAB_ASSISTANT);
	std::cout << Bob.getRole() << std::endl;
	
	Instructor Ligorio = Instructor(11, "A", "Ligorio");
	Ligorio.setOffice("abc123") ;
	std::cout << Ligorio.getOffice() << std::endl;
	Ligorio.setContact("646");
	std::cout << Ligorio.getContact() << std::endl;
}
