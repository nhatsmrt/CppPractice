/* Define the exception here */

class BadLengthException: public exception {
    public:
        BadLengthException(int val) { len = val; }

        int what() { return len; }

    protected:
        int len;
};
