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
               MyWorld.skor.add(1);
            meledak();
             
             
        } else
        if (isTouching(Hero.class)){
            removeTouching(Hero.class);
            getWorld().addObject(new Hero(), 150, 470);
            MyWorld.hp.add(-1);
            if (MyWorld.hp.getValue()==0){
                
                getWorld().addObject(new GameOver(), 150, 300);
                MyWorld.suara.stop();
                Greenfoot.stop();
            }
           meledak();
             
        }
    }
    
   void meledak(){
        Greenfoot.playSound("blast.wav");
       getWorld().addObject(new Alien(Greenfoot.getRandomNumber(6)),
            20+Greenfoot.getRandomNumber(260), 10);
            getWorld().addObject(new Blast(), getX(), getY());
             getWorld().removeObject(this);
    }
        
}

