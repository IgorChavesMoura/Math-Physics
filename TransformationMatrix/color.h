#ifndef COLOR_H
#define COLOR_H


class Color {

    public:

        Color();
        Color(float r, float g, float b);

        static Color Red();
        static Color Green();
        static Color Blue();
        static Color White();

        virtual ~Color();

        float r;
        float g;
        float b;

    protected:

    private:



};

#endif // COLOR_H
