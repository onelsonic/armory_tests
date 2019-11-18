function InitSettings()
{
    if ( navigator.userAgent.toLowerCase().indexOf('android') > -1 )
        Browser = "Google Android";
    else if ( navigator.userAgent.toLowerCase().indexOf('iphone') > -1
        || navigator.userAgent.toLowerCase().indexOf('ipad') > -1
        || navigator.userAgent.toLowerCase().indexOf('ipod') > -1 )
        Browser = "Apple iOS";
    else if ( navigator.userAgent.toLowerCase().indexOf('mobile') > -1 )
        Browser = "Mobile Unknown";
    else if ( navigator.userAgent.toLowerCase().indexOf('viera') > -1 )
        Browser = "Viera Smart T.V.";
    else if ( navigator.userAgent.toLowerCase().indexOf('edge') > -1 )
        Browser = "MS Edge";
    else if ( navigator.userAgent.toLowerCase().indexOf('opera') > -1
        || navigator.userAgent.toLowerCase().indexOf('opr') > -1 )
        Browser = "Opera";
    else if ( navigator.userAgent.toLowerCase().indexOf('chrome') > -1 )
        Browser = "Chrome";
    else if ( navigator.userAgent.toLowerCase().indexOf('firefox') > -1 )
        Browser = "Firefox";
    else if ( navigator.userAgent.toLowerCase().indexOf('ie') > -1
        || navigator.userAgent.toLowerCase().indexOf('trident') > -1 )
        Browser = "MS IE";
    else if ( navigator.userAgent.toLowerCase().indexOf('safari') > -1 )
        Browser = "Safari";
    else
        Browser = "UNKNOWN Browser";

    SoundType = "null";
    var audioTest = document.createElement('audio');
    if ( audioTest.canPlayType('audio/mpeg;') )  SoundType = "mp3";
    else  if ( audioTest.canPlayType('audio/ogg;') )  SoundType = "ogg";

 

Here is our sound effects and music load/play code:

//--------------------------------------------------------------------------------------------------------------
function LoadSound()
{
var index;

    for (index = 0; index < NumberOfMusics; index++)  MusicIsCompletelyLoaded[index] = false;
	
    if (SoundType === "ogg" || SoundType === "mp3")
    {
        for (index = 0; index < NumberOfSoundEffects; index++)
            SoundArray[index] = document.createElement("Audio");

        SoundArray[0].src = "./data/audio/MenuClick." + SoundType;
        SoundArray[1].src = "./data/audio/MenuMove." + SoundType;
        SoundArray[2].src = "./data/audio/MovePiece." + SoundType;
        SoundArray[3].src = "./data/audio/PieceCollision." + SoundType;
        SoundArray[4].src = "./data/audio/PieceDrop." + SoundType;
        SoundArray[5].src = "./data/audio/PieceRotate." + SoundType;
        SoundArray[6].src = "./data/audio/LineCleared." + SoundType;
        SoundArray[7].src = "./data/audio/TetriCleared." + SoundType;
        SoundArray[8].src = "./data/audio/LevelUp." + SoundType;
        SoundArray[9].src = "./data/audio/MustThinkIntestn." + SoundType;
        SoundArray[10].src = "./data/audio/IncomingLine." + SoundType;
        SoundArray[11].src = "./data/audio/GameOver." + SoundType;
        SoundArray[12].src = "./data/audio/Crack." + SoundType;
        SoundArray[13].src = "./data/audio/ShallWePlayAGame." + SoundType;
        SoundArray[14].src = "./data/audio/Sword." + SoundType;

        for (index = 0; index < NumberOfSoundEffects; index++)  { SoundArray[index].preLoad = "auto"; }

        for (index = 0; index < NumberOfMusics; index++)
        {
            MusicArray[index] = document.createElement("Audio");
            MusicArray[index].src = ("./data/audio/Track-0"+(index+1)+"-BGM." + SoundType);
            MusicArray[index].volume = MusicVolume;
            MusicArray[index].preload = "auto";
            MusicArray[index].addEventListener( "canplay", MusicLoaded.bind(window, index) );
        }
    }
}

//--------------------------------------------------------------------------------------------------------------
function PlaySoundEffect(index)
{
    if (ThinktestnTimer > 0)  return;
    
    if (SoundType === "null")  return;
    if ( index > (NumberOfSoundEffects-1) )  return;
        
    if (SoundVolume === 0)  return;

    SoundArray[index].volume = SoundVolume;
    SoundArray[index].currentTime = 0;
    SoundArray[index].play();
}

//--------------------------------------------------------------------------------------------------------------
function PlayMusic(index)
{
    if (SoundType === "null")  return;
    if ( index > (NumberOfMusics-1) )  return;

    if (MusicVolume === 0)  return;

    MusicArray[CurrentlyPlayingMusicTrack].pause();

    CurrentlyPlayingMusicTrack = index;
    MusicArray[index].addEventListener("ended", LoopMusicFixForFirefox, false);

    MusicArray[index].currentTime = 0;
    
    MusicArray[index].volume = MusicVolume;

    MusicArray[index].play();
}