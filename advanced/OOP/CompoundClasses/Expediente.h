//
// Created by cheetos on 3/10/18.
//

class Expediente
{
    private:
        int numExpediente;

    public:
        Expediente(int numExpediente)
        {
            this->numExpediente = numExpediente;
        }

        Expediente()
        {
            // Por defecto
        }

        ~Expediente()
        {
            // Destructor
        }

        int getNumExpediente();
};