
#import "XMLObject.h"

@interface XMLTrack : XMLObject
{
	NSString *_artist;
    NSString *_title;
    NSString *_album;
    NSString *_metadata;
    NSString *_imageurl;
    NSString *_mediaurl;
    NSString *_redirect;
    NSString *_mediatype;
    NSString *_starttime;
    NSString *_guidIndex;
    NSString *_guidSong;
    NSString *_adurl;
    NSString *_addart;
    double _timecode;
    int _offset;
    int _length;
    int _current;
    int _readoff;
	int _begin;
    int _start;
    int _syncoff;
	int _metaint;
    int _bitrate;
    int _seconds;
    int _stationid;
    int _expdays;
    int _expplays;
    int _numplay;
	int _woffset;
	int _roffset;
    BOOL _clickAd;
    BOOL _audioAd;
    BOOL _reloadAd;
    BOOL _buffered;
    BOOL _cached;
    BOOL _covered;
    BOOL _playing;
    BOOL _flyback;
    BOOL _flylive;
    BOOL _delayed;
    BOOL _finished;
    BOOL _listened;
    BOOL _played;
    BOOL _flush;
	BOOL _notfound;
    BOOL _redirecting;
    BOOL _terminating;
    BOOL _redirected;
    BOOL _unsupported;
    BOOL _synced;
    BOOL _resuming;
    UIImage *_original;
    NSString *_albumfile;
    NSString *_filename;
    NSString *_basealbum;
    NSString *_basefile;
	id _rmediafile;
	id _wmediafile;
}

@property (nonatomic, retain) NSString *artist;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *album;
@property (nonatomic, retain) NSString *metadata;
@property (nonatomic, retain) NSString *imageurl;
@property (nonatomic, retain) NSString *mediaurl;
@property (nonatomic, retain) NSString *redirect;
@property (nonatomic, retain) NSString *mediatype;
@property (nonatomic, retain) NSString *starttime;
@property (nonatomic, retain) NSString *guidIndex;
@property (nonatomic, retain) NSString *guidSong;
@property (nonatomic, retain) NSString *adurl;
@property (nonatomic, retain) NSString *addart;
@property (nonatomic) double timecode;
@property (nonatomic) int offset;
@property (nonatomic) int length;
@property (nonatomic) int current;
@property (nonatomic) int readoff;
@property (nonatomic) int begin;
@property (nonatomic) int start;
@property (nonatomic) int syncoff;
@property (nonatomic) int metaint;
@property (nonatomic) int bitrate;
@property (nonatomic) int seconds;
@property (nonatomic) int stationid;
@property (nonatomic) int expdays;
@property (nonatomic) int expplays;
@property (nonatomic) int numplay;
@property (nonatomic) int woffset;
@property (nonatomic) int roffset;
@property (nonatomic) BOOL clickAd;
@property (nonatomic) BOOL audioAd;
@property (nonatomic) BOOL reloadAd;
@property (nonatomic) BOOL buffered;
@property (nonatomic) BOOL cached;
@property (nonatomic) BOOL covered;
@property (nonatomic) BOOL playing;
@property (nonatomic) BOOL flyback;
@property (nonatomic) BOOL flylive;
@property (nonatomic) BOOL delayed;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL listened;
@property (nonatomic) BOOL played;
@property (nonatomic) BOOL flush;
@property (nonatomic) BOOL notfound;
@property (nonatomic) BOOL redirecting;
@property (nonatomic) BOOL terminating;
@property (nonatomic) BOOL redirected;
@property (nonatomic) BOOL unsupported;
@property (nonatomic) BOOL synced;
@property (nonatomic) BOOL resuming;
@property (nonatomic, retain) UIImage *original;
@property (nonatomic, retain) NSString *albumfile;
@property (nonatomic, retain) NSString *filename;
@property (nonatomic, retain) NSString *basealbum;
@property (nonatomic, retain) NSString *basefile;
@property (nonatomic, retain) id rmediafile;
@property (nonatomic, retain) id wmediafile;

- (void)copy:(XMLTrack *)track;

@end
