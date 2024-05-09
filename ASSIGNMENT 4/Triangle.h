namespace shapes
{
    class Triangle
    {
    public:
        Triangle();
        Triangle(float base, float height);
        ~Triangle();
        void setBase(float base);
        void setHeight(float height);
        float getBase();
        float getHeight();

    private:
        float base;
        float height;
    };
}