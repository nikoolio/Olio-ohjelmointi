# h1

Luo C++-projekti nimeltään h1

Muokkaa main-funktiota seuraavasti:
- Kysy luvut ja tallenna ne muuttujiin a ja b
- käytä cin ja cout olioita

Lisää sovellukseen summan ja osamäärän laskemiseen ja tulostamiseen käytettävät funktiot:
- funktio calcSum ottaa vastaan kaksi kokonaislukua ja tulostaa niiden summan, mutta ei palauta mitään.
- funktio calcDiv ottaa vastaan kaksi kokonaislukua ja tulostaa niiden osamäärän, mutta ei palauta mitään.
- jos jakaja on nolla calcDiv tulostaa virheilmoituksen.

kutsu em. funktioita mainissa antamalla niille argumenttina muuttujat a ja b.

Lisää sovellukseen toiset summan ja osamäärän laskemiseen ja tulostamiseen käytettävät funktiot:
- funktio retSum ottaa vastaan kaksi kokonaislukua ja palauttaa niiden summan, mutta ei tulosta mitään
- funktio retDiv ottaa vastaan kaksi kokonaisluka ja palauttaa niiden osamäärän (float), mutta ei tulosta mitään

jos jakaja on nolla retDiv funktiossa "aiheutuu runtime error" eli voit käyttää seuraavaa lausetta
>     throw std::runtime_error("jakaja ei saa olla nolla!");    
    
kutsu em. funktioita mainissa, niin että annat niille argumenttina muuttujat a ja b ja tulosta niiden palauttamat arvot. Funktion retDiv-kutsu tulee tehdä try-catch- rakenteella seuraavasti:
>     //jos try-lohkossa nousee runtime error, hypätään catch-lohkoon
>
>     try {
> 
>         result = retDiv(a,b);
> 
>         cout << a << "/" <<  b << " = " << result << endl;
> 
>     } catch (runtime_error& e) {
>         cout<<"Error: "<< e.what()<< endl;
>     }
> 
