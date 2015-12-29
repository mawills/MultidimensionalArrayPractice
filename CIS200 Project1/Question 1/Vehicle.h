class Vehicle
{
    int age;
    float price;

    public:
        //Constructor
        Vehicle()
        {
            age = 0;
            price = 0.0;
        }

        void setAge(int newAge)
        {
            age = newAge;
        }
        void setPrice(float newPrice)
        {
            price = newPrice;
        }
        int getAge() const
        {
            return age;
        }
        float getPrice() const
        {
            return price;
        }
};
