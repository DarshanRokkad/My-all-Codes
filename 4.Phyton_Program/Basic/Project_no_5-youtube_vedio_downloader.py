# youtube vedio downloader in python
from pytube import YouTube

link = input("Paste your Youtube link : ")

try : 
    vedioFile = YouTube(link)
    # Now we are fileting mp4 files only
    mp4files = vedioFile.streams.filter(file_extension="mp4")
    # Now downloading highest resolution file
    vedio = mp4files.get_highest_resolution()
    vedio.download("E:\\Youtube vedios")
except: 
    print("Connection Error")