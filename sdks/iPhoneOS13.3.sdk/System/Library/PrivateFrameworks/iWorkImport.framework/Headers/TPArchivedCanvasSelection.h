//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKArchivedSelection-Protocol.h>

@class TPCanvasSelection, TSKSelection;

__attribute__((visibility("hidden")))
@interface TPArchivedCanvasSelection : TSPObject <TSKArchivedSelection>
{
    TPCanvasSelection *_selection;
}

@property(retain, nonatomic) TSKSelection *selection; // @synthesize selection=_selection;
// - (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

