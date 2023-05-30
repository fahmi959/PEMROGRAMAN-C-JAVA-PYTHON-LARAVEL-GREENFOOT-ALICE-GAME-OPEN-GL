import greenfoot.*;  // (World, Actor, GreenfootImage, Greenfoot and MouseInfo)

/**
 * Write a description of class hal_about here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class hal_about extends World
{

    /**
     * Constructor for objects of class hal_about.
     * 
     */
    public hal_about()
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
        menu menu = new menu();
        addObject(menu,506,292);
    }
}
