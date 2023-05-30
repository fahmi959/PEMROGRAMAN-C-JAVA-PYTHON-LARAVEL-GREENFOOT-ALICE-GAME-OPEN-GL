import greenfoot.*;  // (World, Actor, GreenfootImage, Greenfoot and MouseInfo)

/**
 * Write a description of class MyWorld here.
 * 
 * @author (Fahmi Ardiansyah _ 4611420003) 
 * @version (a version number or a date)
 */
public class MyWorld extends World
{

    /**
     * Constructor for objects of class MyWorld.
     * 
     */
    public MyWorld()
    {    
        // Create a new world with 600x400 cells with a cell size of 1x1 pixels.
        super(600, 400, 1); 
        prepare();
    }
    
    /**
     * Prepare the world for the start of the program.
     * That is: create the initial objects and add them to the world.
     */
    private void prepare()
    {

        // Aturan Pengkodean
        // [Class] namaobyek = new [Class];
        // addObject(namaobyek, posX, posY);

        Bunga bunga = new Bunga();
        addObject(bunga,300,270);
        Bunga bunga2 = new Bunga();
        addObject(bunga2,437,272);
        Bunga bunga3 = new Bunga();
        addObject(bunga3,181,286);
        KupuKupu kupuKupu = new KupuKupu();
        addObject(kupuKupu,190,163);
        KupuKupu kupuKupu2 = new KupuKupu();
        addObject(kupuKupu2,293,146);
        KupuKupu kupuKupu3 = new KupuKupu();
        addObject(kupuKupu3,397,149);

        Jamur jamur = new Jamur();
        addObject(jamur,537,39);
    }
}
