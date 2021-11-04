//ignore the errors the compiler throws over here

struct node {
    char data;
    struct node* dot;
    struct node* dash;
};
struct node* newNode(char data) {
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->dot = NULL;
    node->dash = NULL;
    return(node);
};

void create_mITU(struct node* morse){
    morse->dot = newNode('E');
    morse->dash=newNode('T');
    morse->dot->dot = newNode('I');
    morse->dot->dash=newNode('A');
    morse->dash->dot = newNode('N');
    morse ->dash -> dash = newNode('M');
    morse ->dot->dot->dot = newNode('S');
    morse ->dot->dot->dash = newNode('U');
    morse ->dot->dash->dot = newNode('R');
    morse ->dot->dash->dash = newNode('W');
    morse->dash->dot->dot = newNode('D');
    morse -> dash ->dot->dash = newNode('K');
    morse->dash->dash->dot = newNode('G');
    morse->dash->dash->dash=newNode('O');
    morse ->dot->dot->dot->dot = newNode('H');
    morse ->dot->dot->dot->dash = newNode('V');
    morse ->dot->dot->dash->dot = newNode('F');
    morse ->dot->dash->dot->dot = newNode('L');
    morse ->dot->dash->dash->dot = newNode('P');
    morse ->dot->dash->dash->dash=newNode('J');
    morse->dash->dot->dot->dot = newNode('B');
    morse->dash->dot->dot->dash = newNode('X');
    morse -> dash ->dot->dash->dot = newNode('C');
    morse -> dash ->dot->dash->dash = newNode('Y');
    morse->dash->dash->dot->dot = newNode('Z');
    morse->dash->dash->dot->dash=newNode('Q');
    morse->dash->dash->dash->dash = newNode('~');
    morse->dash->dash->dash->dot = newNode('~');
    morse->dot->dot->dash->dash = newNode('~');
    morse->dot ->dash->dash->dash->dash = newNode('1');
    morse->dot->dot->dash->dash->dash = newNode('2');
    morse->dot->dot->dot->dash->dash = newNode('3');
    morse->dot->dot->dot->dot->dash = newNode('4');
    morse->dot->dot->dot->dot->dot = newNode('5');
    morse->dash->dot->dot->dot->dot = newNode('6');
    morse->dash->dash->dot->dot->dot = newNode('7');
    morse->dash->dash->dash->dot->dot = newNode('8');
    morse->dash->dash->dash->dash->dot = newNode('9');
    morse->dash->dash->dash->dash->dash = newNode('0');

    
}

void create_eITU(ht_t *hash){
    ht_set(hash , "A" , ".-");
    ht_set(hash , "B" , "-...");
    ht_set(hash , "C" , "-.-.");
    ht_set(hash , "D" , "-..");
    ht_set(hash , "E" , ".");
    ht_set(hash , "F" , "..-.");
    ht_set(hash , "G" , "--.");
    ht_set(hash , "H" , "....");
    ht_set(hash , "I" , "..");
    ht_set(hash , "J" , ".---");
    ht_set(hash , "K" , "-.-");
    ht_set(hash , "L" , ".-..");
    ht_set(hash , "M" , "--");
    ht_set(hash , "N" , "-.");
    ht_set(hash , "O" , "---");
    ht_set(hash , "P" , ".--.");
    ht_set(hash , "Q" , "--.-");
    ht_set(hash , "R" , ".-.");
    ht_set(hash , "S" , "...");
    ht_set(hash , "T" , "-");
    ht_set(hash , "U" , "..-");
    ht_set(hash , "V" , "...-");
    ht_set(hash , "W" , ".--");
    ht_set(hash , "X" , "-..-");
    ht_set(hash , "Y" , "-.--");
    ht_set(hash , "Z" , "--..");
    ht_set(hash , "1" , ".----");
    ht_set(hash , "2" , "..---");
    ht_set(hash , "3" , "...--");
    ht_set(hash , "4" , "....-");
    ht_set(hash , "5" , ".....");
    ht_set(hash , "6" , "-....");
    ht_set(hash , "7" , "--...");
    ht_set(hash , "8" , "---..");
    ht_set(hash , "9" , "----.");
    ht_set(hash , "0" , "-----");
    ht_set(hash , " " , " / ");
};