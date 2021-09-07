{
        bool hasPunction = false;
        bool result = false;
        for (int k = 0; result == false && k < strlen(this->password); k++)
        {
                hasPunction = hasPunction || ispunct(this->password[k]);
                if (hasPunction)
                        result = true;
        }
        return result;
}