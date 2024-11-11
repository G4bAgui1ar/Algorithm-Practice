package Test;

class Song{
    String title;
    String artist;
    Song next;

    Song(String title, String artist){
        this.title = title;
        this.artist = artist;
        this.next = null;
    }
}

class Playlist{
    Song head;
    
    void addSong(String title, String artist){
        Song newSong = new Song(title, artist);
        if(head == null){
            head = newSong;
        } else {
            Song current = head;
            while(current.next != null){
                current = current.next;
            }
            current.next = newSong;
        }
    }

    void printPlaylist(){
        Song current = head;

        while(current != null){
            System.out.println("Song: " + current.title + " by " + current.artist);
            current = current.next;
        }
    }

    void removeSong(String title){
        if(head == null) return;

        if(head.title.equals(title)){
            head = head.next;
            return;
        }

        Song current = head;
        while(current.next != null && !current.next.title.equals(title)){
            current = current.next;
        }

        if(current.next != null){
            current.next = current.next.next;
        }
    }
}

class Sample{
    public static void main(String[] args){
        Playlist playlist = new Playlist();

        playlist.addSong("Apt", "Rosé & Bruno Mars");
        playlist.addSong("Mantra", "Jennie");
        playlist.addSong("Moonlit Floor", "Lisa");

        System.out.println("Current Playlist:");
        playlist.printPlaylist();

        playlist.removeSong("Apt");

        System.out.println("\nUpdated Playlist:");
        playlist.printPlaylist();
    }
}