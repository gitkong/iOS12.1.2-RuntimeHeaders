/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDImageDataAttributes : TSPDataAttributes {
    bool  _hasImageIsSRGB;
    bool  _hasPixelSize;
    bool  _imageIsSRGB;
    struct CGSize { 
        double width; 
        double height; 
    }  _pixelSize;
    bool  _shouldBeInterpretedAsGenericIfUntagged;
}

@property (nonatomic, readonly) bool hasImageIsSRGB;
@property (nonatomic, readonly) bool hasPixelSize;
@property (nonatomic, readonly) bool imageIsSRGB;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic, readonly) bool shouldBeInterpretedAsGenericIfUntagged;

- (id)copyWithIsSRGB:(bool)arg1;
- (id)copyWithPixelSize:(struct CGSize { double x1; double x2; })arg1;
- (id)copyWithShouldBeInterpretedAsGenericIfUntagged:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasImageIsSRGB;
- (bool)hasPixelSize;
- (bool)imageIsSRGB;
- (id)init;
- (id)initWithIsSRGB:(bool)arg1;
- (id)initWithMessage:(const struct DataAttributes { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg1;
- (id)initWithPixelSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithShouldBeInterpretedAsGenericIfUntagged:(bool)arg1;
- (struct CGSize { double x1; double x2; })pixelSize;
- (void)saveToMessage:(struct DataAttributes { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg1;
- (bool)shouldBeInterpretedAsGenericIfUntagged;
- (struct CGSize { double x1; double x2; })size;

@end
