class Employee
{
    int age;
    int id;
    float salary;

    public:
        Employee()
        {
          age = 0;
          id = 0;
          salary = 0;
        };
        void setAge(int newAge)
        {
            age = newAge;
        }
        void setId(int newId)
        {
         id = newId;
        }
        void setSalary(float newSalary)
        {
            salary = newSalary;
        }
        int getAge();
        int getId();
        float getSalary();
};

int Employee::getAge()
{
    return age;
}
int Employee::getId()
{
    return id;
}
float Employee::getSalary()
{
    return salary;
}
