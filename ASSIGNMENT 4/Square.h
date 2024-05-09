namespace shapes
{
    class Square
    {
    public:
        Square();
        Square(float length);
        ~Square();
        void setLength(float length);
        float getLength();

    private:
        float length;
    };
}