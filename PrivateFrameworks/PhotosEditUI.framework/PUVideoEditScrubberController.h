/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUVideoEditScrubberController : NSObject <PLSlalomRegionEditorDelegate, UIMovieScrubberDataSource, UIMovieScrubberDelegate> {
    PLSlalomRegionEditor * __slomoRegionEditor;
    <PUVideoEditScrubberControllerDelegate> * _delegate;
    struct { 
        bool respondsToDidBeginScrubbing; 
        bool respondsToDidEndScrubbing; 
        bool respondsToValueDidChange; 
        bool respondsToStartDidChange; 
        bool respondsToEndDidChange; 
        bool respondsToDidBeginEditingSlomoRegions; 
        bool respondsToDidEndEditingSlomoRegions; 
        bool respondsToSlomoRegionsDidChangewithHandle; 
    }  _delegateFlags;
    double  _edgeInset;
    UIMovieScrubber * _movieScrubber;
    UIView * _scrubberView;
    bool  _showsSlomoRegionEditor;
    PUVideoEditScrubberImageSource * _thumbnailSource;
    double  _videoAspectRatio;
    double  _videoDuration;
}

@property (setter=_setSlomoRegionEditor:, nonatomic, retain) PLSlalomRegionEditor *_slomoRegionEditor;
@property (nonatomic) double currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUVideoEditScrubberControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double edgeInset;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEditing;
@property (nonatomic, retain) UIMovieScrubber *movieScrubber;
@property (setter=_setScrubberView:, nonatomic, retain) UIView *scrubberView;
@property (nonatomic) bool showsSlomoRegionEditor;
@property (nonatomic) double slomoEndTime;
@property (nonatomic) double slomoMaxTime;
@property (nonatomic) double slomoMinTime;
@property (nonatomic) double slomoStartTime;
@property (readonly) Class superclass;
@property (nonatomic) bool thumbIsVisible;
@property (nonatomic, retain) PUVideoEditScrubberImageSource *thumbnailSource;
@property (nonatomic) double trimEndTime;
@property (nonatomic) double trimStartTime;
@property (nonatomic, readonly) double videoAspectRatio;
@property (nonatomic, readonly) double videoDuration;

- (void).cxx_destruct;
- (void)_createView;
- (void)_setScrubberView:(id)arg1;
- (void)_setSlomoRegionEditor:(id)arg1;
- (id)_slomoRegionEditor;
- (void)_updateSlomoRegionEditor;
- (double)currentTime;
- (void)dealloc;
- (id)delegate;
- (double)edgeInset;
- (id)initWithVideoDuration:(double)arg1 videoAspectRatio:(double)arg2;
- (bool)isEditing;
- (id)movieScrubber;
- (void)movieScrubber:(id)arg1 editingEndValueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 editingStartValueDidChange:(double)arg2;
- (id)movieScrubber:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4;
- (void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2;
- (void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 isSummaryThumbnail:(bool)arg3;
- (void)movieScrubber:(id)arg1 valueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 willZoomToMinimumValue:(double)arg2 maximumValue:(double)arg3;
- (void)movieScrubberDidBeginAnimatingZoom:(id)arg1;
- (void)movieScrubberDidBeginEditing:(id)arg1;
- (void)movieScrubberDidBeginScrubbing:(id)arg1 withHandle:(int)arg2;
- (void)movieScrubberDidEndAnimatingZoom:(id)arg1;
- (void)movieScrubberDidEndScrubbing:(id)arg1 withHandle:(int)arg2;
- (void)movieScrubberDidFinishRequestingThumbnails:(id)arg1;
- (double)movieScrubberDuration:(id)arg1;
- (double)movieScrubberThumbnailAspectRatio:(id)arg1;
- (void)reloadData;
- (id)scrubberView;
- (void)setCurrentTime:(double)arg1;
- (void)setCurrentTime:(double)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEdgeInset:(double)arg1;
- (void)setMovieScrubber:(id)arg1;
- (void)setShowsSlomoRegionEditor:(bool)arg1;
- (void)setSlomoEndTime:(double)arg1;
- (void)setSlomoMaxTime:(double)arg1;
- (void)setSlomoMinTime:(double)arg1;
- (void)setSlomoStartTime:(double)arg1;
- (void)setThumbIsVisible:(bool)arg1;
- (void)setThumbnailSource:(id)arg1;
- (void)setTrimEndTime:(double)arg1;
- (void)setTrimStartTime:(double)arg1;
- (bool)showsSlomoRegionEditor;
- (void)slalomRegionEditorDidBeginEditing:(id)arg1 withStartHandle:(bool)arg2;
- (void)slalomRegionEditorDidEndEditing:(id)arg1;
- (void)slalomRegionEditorEndValueChanged:(id)arg1;
- (void)slalomRegionEditorRequestForceUnzoom:(id)arg1;
- (bool)slalomRegionEditorRequestForceZoom:(id)arg1;
- (void)slalomRegionEditorStartValueChanged:(id)arg1;
- (double)slomoEndTime;
- (double)slomoMaxTime;
- (double)slomoMinTime;
- (double)slomoStartTime;
- (bool)thumbIsVisible;
- (id)thumbnailSource;
- (double)trimEndTime;
- (double)trimStartTime;
- (double)videoAspectRatio;
- (double)videoDuration;

@end