import greenfoot.*;  // (World, Actor, GreenfootImage, Greenfoot and MouseInfo)

/**
 * Write a description of class MyWorld here.
 * 
 * @author (your name) 
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
        super(300, 500, 1); 
        prepare();
    }
    /**
     * Prepare the world for the start of the program.
     * That is: create the initial objects and add them to the world.
     */
    private void prepare()
    {
        int tipe =0 ;
        for (int i=0;i<5;i++){
        tipe = Greenfoot.getRandomNumber(6);
        addObject(new Alien(tipe),20+Greenfoot.getRandomNumber(260),Greenfoot.getRandomNumber(30));
    }
    addObject(new Hero(), 150, 470) ;
}
    
}
