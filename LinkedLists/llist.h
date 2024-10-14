class LList{
    public:
        LList();

        // The Big 3
        ~LList();
        LList(const LList& other);
        LList& operator = (const LList& other);

        void add_to_end(int d);
        void add_to_begin(int d);
        void remove(int target);

    private:
        Node* head;
        Node* tail;
};