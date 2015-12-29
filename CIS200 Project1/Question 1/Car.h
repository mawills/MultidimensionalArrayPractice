class Car: public Vehicle
{
    bool raceCarStatus;

    public:
        //Constructor
        Car()
        {
            raceCarStatus = false;
        }

        void setRaceCarStatus(bool newRaceCarStatus)
        {
            raceCarStatus = newRaceCarStatus;
        }

        bool getRaceCarStatus() const
        {
            return raceCarStatus;
        }
};
