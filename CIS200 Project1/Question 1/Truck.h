class Truck: public Vehicle
{
    bool dieselTypeStatus;

    public:
        //Constructor
        Truck()
        {
            dieselTypeStatus = false;
        }

        void setDieselTypeStatus(bool newDieselTypeStatus)
        {
            dieselTypeStatus = newDieselTypeStatus;
        }

        bool getDieselTypeStatus() const
        {
            return dieselTypeStatus;
        }
};
