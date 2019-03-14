/*
 * Created by davi on 3/6/19.
*/

#ifndef EX2_MEDIA_H
#define EX2_MEDIA_H


class Media {
private:
    float grauA;
    float grauB;
    float grauC;
    float media;
public:
    Media();
    ~Media();

    float getGrauA();
    float getGrauB();
    float getGrauC();
    float getMedia();

    void setGrauA( float );
    void setGrauB( float );

    void calculaMedia();
};


#endif //EX2_MEDIA_H
