class bank_acc{
    private:
        string name;
        int acc_no;
        float bal;

    public:
    
    // constructor: deaclerd here but defined in nmain
        bank_acc(string n, int a);

        void get_details(void);
        void deposit(int amount);
        void withdraw(int amount);



};