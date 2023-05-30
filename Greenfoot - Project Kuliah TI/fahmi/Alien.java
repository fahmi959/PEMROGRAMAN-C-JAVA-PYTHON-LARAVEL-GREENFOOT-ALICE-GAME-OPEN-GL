import greenfoot.*;  // (World, Actor, GreenfootImage, Greenfoot and MouseInfo)

/**
 * Write a description of class Alien here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Alien extends Actor
{
    /**
     * Act - do whatever the Alien wants to do. This method is called whenever
     * the 'Act' or 'Run' button gets pressed in the environment.
     */
    int jenis = 0;
    public Alien() {
        setImage("Alien0.png");
    }

    public Alien(int tipe){
        jenis = tipe;
        setImage("Alien"+tipe+".png");
    }

    public void act()
    {
        // Add your action code here.
        setLocation(getX(), getY()+jenis+1);
        if (getY()>490){
            setLocation(getX(),0);
        }
        
       tumbuk();
    }
    
    void tumbuk(){
        if (isTouching(Peluru.class)){
            
            removeTouching(Peluru.class);
           
            getWorld().addObject(new Alien(Greenfoot.getRandomNumber(6)),
            20+Greenfoot.getRandomNumber(260), 10);
            getWorld().addObject(new Blast(), getX(), getY());
             getWorld().removeObject(this);
        }
    }
        
}

