package com.pack.oop;

public class User {
    private String username;
    private String password;


    public User(String username, String password){
        this.username = username;
        this.password = password;
    }


    public void doLogin(String username, String password){
        if(this.username == username){
            if(this.password == password){
                System.out.println("Login was a success");
                return;
            }
            System.out.println("wrong password");
            return;
        }
        System.out.println("User not found");
    }


    // getters and setters
    public String getUsername() {
        return username;
    }

    public void setUsername(String username) {
        this.username = username;
    }

    public String getPassword() {
        return password;
    }

    public void setPassword(String password) {
        this.password = password;
    }
}
