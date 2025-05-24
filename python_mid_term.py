class StudentDatabase:
    def __init__(self):
        self.__student_list = []

    def get_student_list(self):
        return self.__student_list

    def add_student(self,id,name,dep,enroll=False):
        student = Student(id,name,dep,enroll)
        self.__student_list.append(student)

    def view_all_student(self):
        for student in self.__student_list:
            student.view_student_info()


class Student:
    def __init__(self,student_id,name,department,is_enroll=False):
        self.__student_id = student_id
        self.__name = name
        self.__department = department
        self.__is_enroll = is_enroll

    def get_student_id(self):
        return self.__student_id
    def set_student_id(self,value):
        self.__student_id = value

    def get_name(self):
        return self.__name
    def set_name(self,value):
        self.__name = value

    def get_department(self):
        return self.__department
    def set_department(self,value):
        self.__department = value

    def get_is_enroll(self):
        return self.__is_enroll
    def set_is_enroll(self,value):
        self.__is_enroll = value
    
    def enroll_student(self):
        if self.__is_enroll == False:
            self.__is_enroll = True
            print(f"Student id-{self.__student_id} is enrolled now")
        else:
            print("Student is already enrolled")

    def drop_student(self):
        if self.__is_enroll == True:
            self.__is_enroll = False
            print(f"Student id-{self.__student_id} is dropped")
        else:
            print(f"student id-{self.__student_id} is already dropped")

    def view_student_info(self):
        print(f"ID: {self.__student_id}, Name: {self.__name}, Department: {self.__department}, Enrolled: {self.__is_enroll}")


s = StudentDatabase()
s1 = s.add_student("S101","Rahim","CSE",True)
s2 = s.add_student("S102","Karim","EEE")
s3 = s.add_student("S103","Jobbar","Civil")


while (True):
    
    print("--- Student Management Menu ---")
    print("1. View All Students")
    print("2. Enroll Student")
    print("3. Drop Student")
    print("4. Exit")

    abc = int(input("Enter your choice (1-4): "))

    if abc>0 and abc<5:
        if abc == 1:
            s.view_all_student()
        elif abc == 2:
            a = input("Enter Student ID to enroll: ")
            for b in s.get_student_list():
                if b.get_student_id() == a:
                    b.enroll_student()  
                else:
                    print("this is student is not available")              
        elif abc == 3:
            c = input("Enter Student ID to Drop: ")
            for d in s.get_student_list():
                if d.get_student_id() == c:
                    d.drop_student()
        elif abc == 4:
            print("--- Thank you for stay with us ---")
            break
    else:
        print("Please enter number between 1 to 4....")

