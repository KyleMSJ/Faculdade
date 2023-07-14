/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Thread;

import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Aluno
 */
public class TestThreadDeadLock {
 public static Object Lock1  = new Object();
 public static Object Lock2  = new Object();
 
 public static void main(String args[]){
     ThreadDemo1 tD1= new ThreadDemo1();
     ThreadDemo2 tD2= new ThreadDemo2();
     tD1.start();
     tD2.start();  
 }
 
 
    
 private static class ThreadDemo1 extends Thread{
   public void run(){
    synchronized(Lock1){
     System.out.println("\n Thread1: bloqueando o Lock1");     
        try {
         Thread.sleep(10);
        } catch (InterruptedException ex) {
         System.out.println("\n Thread1: DeadLock Aguardando o Lock2");     
        }        
        synchronized(Lock2){
         System.out.println("\n Thread1: bloqueando o Lock1 e Lock2");     
        }           
      }            
    }        
 }
 
 
 
 private static class ThreadDemo2 extends Thread{
   public void run(){
    synchronized(Lock2){
     System.out.println("\n Thread1: bloqueando o Lock2");     
        try {
         Thread.sleep(10);
        } catch (InterruptedException ex) {
         System.out.println("\n Thread1: DeadLock Aguardando o Lock1");     
        }        
        synchronized(Lock1){
         System.out.println("\n Thread1: bloqueando o Lock1 e Lock2");     
        }           
      }            
    }        
 } 
    
    
    
    
    
    
    
    
}
