#ifndef EX2_MEDIA_H
#define EX2_MEDIA_H


class Media {

private:

    float grauA;
    float grauB;
    double grauC;
    double media;

public:

    Media();
    ~Media();

    float getGrauA();
    float getGrauB();
    double getGrauC();
    double getMedia();

    void setGrauA( float );
    void setGrauB( float );

    void calculaMedia();
    float calculaNotaNecessariaGC();
};


#endif //EX2_MEDIA_H
