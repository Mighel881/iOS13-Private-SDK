//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/KNAbstractSlide.h>

#import <iWorkImport/TSKModel-Protocol.h>
#import <iWorkImport/TSKTransformableObject-Protocol.h>

@class KNMasterSlide, KNNoteInfo, NSMutableSet, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface KNSlide : KNAbstractSlide <TSKModel, TSKTransformableObject>
{
    KNMasterSlide *_master;
    KNNoteInfo *_note;
    NSMutableSet *_infosUsingObjectPlaceholderGeometry;
}

+ (id)blankSlideWithSlideNode:(id)arg1 master:(id)arg2 andShow:(id)arg3;
@property(readonly, nonatomic) NSSet *infosUsingObjectPlaceholderGeometry; // @synthesize infosUsingObjectPlaceholderGeometry=_infosUsingObjectPlaceholderGeometry;
@property(retain, nonatomic) KNNoteInfo *note; // @synthesize note=_note;
- (void)p_checkMaster;
- (void)addMapForStorage:(id)arg1 forHyperlink:(id)arg2;
- (void)removeMapForStorage:(id)arg1 forHyperlink:(id)arg2;
- (void)updateSlideSpecificHyperlinkMapForStorage:(id)arg1 oldHyperlink:(id)arg2 newHyperlink:(id)arg3;
- (void)updateSlideSpecificLinkMapForInfo:(id)arg1 newHyperlink:(id)arg2;
- (id)p_slideNodeUUIDStringFromURL:(id)arg1;
- (_Bool)p_urlIsSlideSpecific:(id)arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (id)infosToDisplay;
- (void)acceptVisitor:(id)arg1;
- (id)childEnumerator;
- (_Bool)isNoteSelectionPath:(id)arg1;
- (void)removeDrawable:(id)arg1;
- (_Bool)p_oneOrMoreDrawablesMayHaveImplicitBuildEventsInDrawables:(id)arg1;
- (void)insertDrawables:(id)arg1 atIndex:(unsigned long long)arg2 dolcContext:(id)arg3;
- (_Bool)isMasterSlide;
@property(readonly, nonatomic) _Bool slideObjectsLayerWithMaster;
- (id)infoCorrespondingToMasterInfo:(id)arg1;
- (id)defaultSlideNumberPlaceholderWithContext:(id)arg1;
- (id)defaultBodyPlaceholderWithContext:(id)arg1;
- (id)defaultTitlePlaceholderWithContext:(id)arg1;
- (void)setToMaster:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
@property(readonly, nonatomic) _Bool areInfosUsingObjectPlaceholderGeometry;
- (void)setInfosUsingObjectPlaceholderGeometry:(id)arg1;
- (void)removeInfoUsingObjectPlaceholderGeometry:(id)arg1;
- (void)addInfoUsingObjectPlaceholderGeometry:(id)arg1;
@property(retain, nonatomic) KNMasterSlide *master;
- (void)setMaster:(id)arg1 resetMasterBackgroundObjects:(_Bool)arg2;
- (id)initWithSlideNode:(id)arg1 master:(id)arg2 andShow:(id)arg3;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
-     // Error parsing type: v32@0:8^{SlideArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<KN::BuildChunkArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSD::GuideArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<KN::SlideArchive_SageTagMapEntry>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Reference}^{TransitionArchive}^{Reference}^{Reference}^{GeometryArchive}^{GeometryArchive}^{Reference}^{Reference}^{GeometryArchive}^{ShapeStylePropertiesArchive}^{ShapeStylePropertiesArchive}^{ShapeStylePropertiesArchive}^{Reference}^{Reference}^{Reference}^{Reference}^{Reference}IIIIIIBBBB}16@24, name: saveToArchive:archiver:
-     // Error parsing type: v32@0:8r^{SlideArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<KN::BuildChunkArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSD::GuideArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<KN::SlideArchive_SageTagMapEntry>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Reference}^{TransitionArchive}^{Reference}^{Reference}^{GeometryArchive}^{GeometryArchive}^{Reference}^{Reference}^{GeometryArchive}^{ShapeStylePropertiesArchive}^{ShapeStylePropertiesArchive}^{ShapeStylePropertiesArchive}^{Reference}^{Reference}^{Reference}^{Reference}^{Reference}IIIIIIBBBB}16@24, name: loadFromArchive:unarchiver:
- (_Bool)isComponentRoot;
- (id)packageLocator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
