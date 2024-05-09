namespace shapes
{
    class Circle
    {
    public:
        Circle();
        Circle(float radius);
        ~Circle();
        void setRadius(float radius);
        float getRadius();

    private:
        float radius;
    };
}