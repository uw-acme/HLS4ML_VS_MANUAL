<?xml version="1.0" encoding="UTF-8" standalone="yes" ?>
<!DOCTYPE boost_serialization>
<boost_serialization signature="serialization::archive" version="15">
<syndb class_id="0" tracking_level="0" version="0">
	<userIPLatency>-1</userIPLatency>
	<userIPName></userIPName>
	<cdfg class_id="1" tracking_level="1" version="0" object_id="_0">
		<name>myproject</name>
		<ret_bitwidth>0</ret_bitwidth>
		<ports class_id="2" tracking_level="0" version="0">
			<count>2</count>
			<item_version>0</item_version>
			<item class_id="3" tracking_level="1" version="0" object_id="_1">
				<Value class_id="4" tracking_level="0" version="0">
					<Obj class_id="5" tracking_level="0" version="0">
						<type>1</type>
						<id>1</id>
						<name>layer1_input_V</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo class_id="6" tracking_level="0" version="0">
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName>layer1_input.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>2160</bitwidth>
				</Value>
				<direction>0</direction>
				<if_type>0</if_type>
				<array_size>0</array_size>
				<bit_vecs class_id="7" tracking_level="0" version="0">
					<count>0</count>
					<item_version>0</item_version>
				</bit_vecs>
			</item>
			<item class_id_reference="3" object_id="_2">
				<Value>
					<Obj>
						<type>1</type>
						<id>2</id>
						<name>layer6_out_0_V</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName>layer6_out[0].V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>18</bitwidth>
				</Value>
				<direction>1</direction>
				<if_type>0</if_type>
				<array_size>0</array_size>
				<bit_vecs>
					<count>0</count>
					<item_version>0</item_version>
				</bit_vecs>
			</item>
		</ports>
		<nodes class_id="8" tracking_level="0" version="0">
			<count>21</count>
			<item_version>0</item_version>
			<item class_id="9" tracking_level="1" version="0" object_id="_3">
				<Value>
					<Obj>
						<type>0</type>
						<id>25</id>
						<name>call_ret1</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>90</bitwidth>
				</Value>
				<oprand_edges>
					<count>14</count>
					<item_version>0</item_version>
					<item>48</item>
					<item>49</item>
					<item>90</item>
					<item>91</item>
					<item>92</item>
					<item>93</item>
					<item>94</item>
					<item>95</item>
					<item>96</item>
					<item>97</item>
					<item>98</item>
					<item>99</item>
					<item>100</item>
					<item>101</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>1.44</m_delay>
				<m_topoIndex>1</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_4">
				<Value>
					<Obj>
						<type>0</type>
						<id>26</id>
						<name>layer2_out_0_V</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName>layer2_out[0].V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>18</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>50</item>
				</oprand_edges>
				<opcode>extractvalue</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>2</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_5">
				<Value>
					<Obj>
						<type>0</type>
						<id>27</id>
						<name>layer2_out_1_V</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName>layer2_out[1].V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>18</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>51</item>
				</oprand_edges>
				<opcode>extractvalue</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>3</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_6">
				<Value>
					<Obj>
						<type>0</type>
						<id>28</id>
						<name>layer2_out_2_V</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName>layer2_out[2].V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>18</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>52</item>
				</oprand_edges>
				<opcode>extractvalue</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>4</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_7">
				<Value>
					<Obj>
						<type>0</type>
						<id>29</id>
						<name>layer2_out_3_V</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName>layer2_out[3].V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>18</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>53</item>
				</oprand_edges>
				<opcode>extractvalue</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>5</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_8">
				<Value>
					<Obj>
						<type>0</type>
						<id>30</id>
						<name>layer2_out_4_V</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName>layer2_out[4].V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>18</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>54</item>
				</oprand_edges>
				<opcode>extractvalue</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>6</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_9">
				<Value>
					<Obj>
						<type>0</type>
						<id>31</id>
						<name>call_ret2</name>
						<fileName>firmware/nnet_utils/nnet_dense.h</fileName>
						<fileDirectory>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</fileDirectory>
						<lineNumber>43</lineNumber>
						<contextFuncName>dense&amp;lt;ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, config3&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item class_id="11" tracking_level="0" version="0">
								<first>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</first>
								<second class_id="12" tracking_level="0" version="0">
									<count>2</count>
									<item_version>0</item_version>
									<item class_id="13" tracking_level="0" version="0">
										<first class_id="14" tracking_level="0" version="0">
											<first>firmware/myproject.cpp</first>
											<second>myproject</second>
										</first>
										<second>45</second>
									</item>
									<item>
										<first>
											<first>firmware/nnet_utils/nnet_dense.h</first>
											<second>dense&amp;lt;ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, config3&amp;gt;</second>
										</first>
										<second>43</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>90</bitwidth>
				</Value>
				<oprand_edges>
					<count>6</count>
					<item_version>0</item_version>
					<item>56</item>
					<item>57</item>
					<item>58</item>
					<item>59</item>
					<item>60</item>
					<item>61</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>3.79</m_delay>
				<m_topoIndex>7</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_10">
				<Value>
					<Obj>
						<type>0</type>
						<id>32</id>
						<name>layer3_out_0_V</name>
						<fileName>firmware/nnet_utils/nnet_dense.h</fileName>
						<fileDirectory>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</fileDirectory>
						<lineNumber>43</lineNumber>
						<contextFuncName>dense&amp;lt;ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, config3&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</first>
								<second>
									<count>2</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>firmware/myproject.cpp</first>
											<second>myproject</second>
										</first>
										<second>45</second>
									</item>
									<item>
										<first>
											<first>firmware/nnet_utils/nnet_dense.h</first>
											<second>dense&amp;lt;ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, config3&amp;gt;</second>
										</first>
										<second>43</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>layer3_out[0].V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>18</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>62</item>
				</oprand_edges>
				<opcode>extractvalue</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>8</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_11">
				<Value>
					<Obj>
						<type>0</type>
						<id>33</id>
						<name>layer3_out_1_V</name>
						<fileName>firmware/nnet_utils/nnet_dense.h</fileName>
						<fileDirectory>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</fileDirectory>
						<lineNumber>43</lineNumber>
						<contextFuncName>dense&amp;lt;ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, config3&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</first>
								<second>
									<count>2</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>firmware/myproject.cpp</first>
											<second>myproject</second>
										</first>
										<second>45</second>
									</item>
									<item>
										<first>
											<first>firmware/nnet_utils/nnet_dense.h</first>
											<second>dense&amp;lt;ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, config3&amp;gt;</second>
										</first>
										<second>43</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>layer3_out[1].V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>18</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>63</item>
				</oprand_edges>
				<opcode>extractvalue</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>9</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_12">
				<Value>
					<Obj>
						<type>0</type>
						<id>34</id>
						<name>layer3_out_2_V</name>
						<fileName>firmware/nnet_utils/nnet_dense.h</fileName>
						<fileDirectory>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</fileDirectory>
						<lineNumber>43</lineNumber>
						<contextFuncName>dense&amp;lt;ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, config3&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</first>
								<second>
									<count>2</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>firmware/myproject.cpp</first>
											<second>myproject</second>
										</first>
										<second>45</second>
									</item>
									<item>
										<first>
											<first>firmware/nnet_utils/nnet_dense.h</first>
											<second>dense&amp;lt;ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, config3&amp;gt;</second>
										</first>
										<second>43</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>layer3_out[2].V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>18</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>64</item>
				</oprand_edges>
				<opcode>extractvalue</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>10</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_13">
				<Value>
					<Obj>
						<type>0</type>
						<id>35</id>
						<name>layer3_out_3_V</name>
						<fileName>firmware/nnet_utils/nnet_dense.h</fileName>
						<fileDirectory>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</fileDirectory>
						<lineNumber>43</lineNumber>
						<contextFuncName>dense&amp;lt;ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, config3&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</first>
								<second>
									<count>2</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>firmware/myproject.cpp</first>
											<second>myproject</second>
										</first>
										<second>45</second>
									</item>
									<item>
										<first>
											<first>firmware/nnet_utils/nnet_dense.h</first>
											<second>dense&amp;lt;ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, config3&amp;gt;</second>
										</first>
										<second>43</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>layer3_out[3].V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>18</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>65</item>
				</oprand_edges>
				<opcode>extractvalue</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>11</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_14">
				<Value>
					<Obj>
						<type>0</type>
						<id>36</id>
						<name>layer3_out_4_V</name>
						<fileName>firmware/nnet_utils/nnet_dense.h</fileName>
						<fileDirectory>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</fileDirectory>
						<lineNumber>43</lineNumber>
						<contextFuncName>dense&amp;lt;ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, config3&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</first>
								<second>
									<count>2</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>firmware/myproject.cpp</first>
											<second>myproject</second>
										</first>
										<second>45</second>
									</item>
									<item>
										<first>
											<first>firmware/nnet_utils/nnet_dense.h</first>
											<second>dense&amp;lt;ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, config3&amp;gt;</second>
										</first>
										<second>43</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>layer3_out[4].V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>18</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>66</item>
				</oprand_edges>
				<opcode>extractvalue</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>12</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_15">
				<Value>
					<Obj>
						<type>0</type>
						<id>37</id>
						<name>call_ret</name>
						<fileName>firmware/myproject.cpp</fileName>
						<fileDirectory>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</fileDirectory>
						<lineNumber>49</lineNumber>
						<contextFuncName>myproject</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>firmware/myproject.cpp</first>
											<second>myproject</second>
										</first>
										<second>49</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>85</bitwidth>
				</Value>
				<oprand_edges>
					<count>6</count>
					<item_version>0</item_version>
					<item>68</item>
					<item>69</item>
					<item>70</item>
					<item>71</item>
					<item>72</item>
					<item>73</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.96</m_delay>
				<m_topoIndex>13</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_16">
				<Value>
					<Obj>
						<type>0</type>
						<id>38</id>
						<name>layer4_out_0_V</name>
						<fileName>firmware/myproject.cpp</fileName>
						<fileDirectory>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</fileDirectory>
						<lineNumber>49</lineNumber>
						<contextFuncName>myproject</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>firmware/myproject.cpp</first>
											<second>myproject</second>
										</first>
										<second>49</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>layer4_out[0].V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>17</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>74</item>
				</oprand_edges>
				<opcode>extractvalue</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>14</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_17">
				<Value>
					<Obj>
						<type>0</type>
						<id>39</id>
						<name>layer4_out_1_V</name>
						<fileName>firmware/myproject.cpp</fileName>
						<fileDirectory>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</fileDirectory>
						<lineNumber>49</lineNumber>
						<contextFuncName>myproject</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>firmware/myproject.cpp</first>
											<second>myproject</second>
										</first>
										<second>49</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>layer4_out[1].V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>17</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>75</item>
				</oprand_edges>
				<opcode>extractvalue</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>15</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_18">
				<Value>
					<Obj>
						<type>0</type>
						<id>40</id>
						<name>layer4_out_2_V</name>
						<fileName>firmware/myproject.cpp</fileName>
						<fileDirectory>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</fileDirectory>
						<lineNumber>49</lineNumber>
						<contextFuncName>myproject</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>firmware/myproject.cpp</first>
											<second>myproject</second>
										</first>
										<second>49</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>layer4_out[2].V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>17</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>76</item>
				</oprand_edges>
				<opcode>extractvalue</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>16</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_19">
				<Value>
					<Obj>
						<type>0</type>
						<id>41</id>
						<name>layer4_out_3_V</name>
						<fileName>firmware/myproject.cpp</fileName>
						<fileDirectory>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</fileDirectory>
						<lineNumber>49</lineNumber>
						<contextFuncName>myproject</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>firmware/myproject.cpp</first>
											<second>myproject</second>
										</first>
										<second>49</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>layer4_out[3].V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>17</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>77</item>
				</oprand_edges>
				<opcode>extractvalue</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>17</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_20">
				<Value>
					<Obj>
						<type>0</type>
						<id>42</id>
						<name>layer4_out_4_V</name>
						<fileName>firmware/myproject.cpp</fileName>
						<fileDirectory>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</fileDirectory>
						<lineNumber>49</lineNumber>
						<contextFuncName>myproject</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>firmware/myproject.cpp</first>
											<second>myproject</second>
										</first>
										<second>49</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>layer4_out[4].V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>17</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>78</item>
				</oprand_edges>
				<opcode>extractvalue</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>18</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_21">
				<Value>
					<Obj>
						<type>0</type>
						<id>43</id>
						<name>layer5_out_0_V</name>
						<fileName>firmware/nnet_utils/nnet_dense.h</fileName>
						<fileDirectory>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</fileDirectory>
						<lineNumber>43</lineNumber>
						<contextFuncName>dense&amp;lt;ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, config5&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</first>
								<second>
									<count>2</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>firmware/myproject.cpp</first>
											<second>myproject</second>
										</first>
										<second>53</second>
									</item>
									<item>
										<first>
											<first>firmware/nnet_utils/nnet_dense.h</first>
											<second>dense&amp;lt;ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;18, 8, 5, 3, 0&amp;gt;, config5&amp;gt;</second>
										</first>
										<second>43</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>layer5_out[0].V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>18</bitwidth>
				</Value>
				<oprand_edges>
					<count>6</count>
					<item_version>0</item_version>
					<item>80</item>
					<item>81</item>
					<item>82</item>
					<item>83</item>
					<item>84</item>
					<item>85</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>3.79</m_delay>
				<m_topoIndex>19</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_22">
				<Value>
					<Obj>
						<type>0</type>
						<id>44</id>
						<name>_ln55</name>
						<fileName>firmware/myproject.cpp</fileName>
						<fileDirectory>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</fileDirectory>
						<lineNumber>55</lineNumber>
						<contextFuncName>myproject</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>firmware/myproject.cpp</first>
											<second>myproject</second>
										</first>
										<second>55</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>4</count>
					<item_version>0</item_version>
					<item>87</item>
					<item>88</item>
					<item>89</item>
					<item>102</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>4.14</m_delay>
				<m_topoIndex>20</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_23">
				<Value>
					<Obj>
						<type>0</type>
						<id>45</id>
						<name>_ln57</name>
						<fileName>firmware/myproject.cpp</fileName>
						<fileDirectory>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</fileDirectory>
						<lineNumber>57</lineNumber>
						<contextFuncName>myproject</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>firmware/myproject.cpp</first>
											<second>myproject</second>
										</first>
										<second>57</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>0</count>
					<item_version>0</item_version>
				</oprand_edges>
				<opcode>ret</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>21</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
		</nodes>
		<consts class_id="15" tracking_level="0" version="0">
			<count>5</count>
			<item_version>0</item_version>
			<item class_id="16" tracking_level="1" version="0" object_id="_24">
				<Value>
					<Obj>
						<type>2</type>
						<id>47</id>
						<name>gru_stack_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>90</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:gru_stack&lt;ap_fixed&lt;18, 8, 5, 3, 0&gt;, ap_fixed&lt;18, 8, 5, 3, 0&gt;, config2&gt;&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_25">
				<Value>
					<Obj>
						<type>2</type>
						<id>55</id>
						<name>dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>90</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:dense_resource&lt;ap_fixed&lt;18, 8, 5, 3, 0&gt;, ap_fixed&lt;18, 8, 5, 3, 0&gt;, config3&gt;&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_26">
				<Value>
					<Obj>
						<type>2</type>
						<id>67</id>
						<name>relu_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_relu_config4_s</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>85</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:relu&lt;ap_fixed&lt;18, 8, 5, 3, 0&gt;, ap_fixed&lt;18, 8, 5, 3, 0&gt;, relu_config4&gt;&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_27">
				<Value>
					<Obj>
						<type>2</type>
						<id>79</id>
						<name>dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config5_s</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>18</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:dense_resource&lt;ap_fixed&lt;18, 8, 5, 3, 0&gt;, ap_fixed&lt;18, 8, 5, 3, 0&gt;, config5&gt;&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_28">
				<Value>
					<Obj>
						<type>2</type>
						<id>86</id>
						<name>sigmoid_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_sigmoid_config6_s</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:sigmoid&lt;ap_fixed&lt;18, 8, 5, 3, 0&gt;, ap_fixed&lt;18, 8, 5, 3, 0&gt;, sigmoid_config6&gt;&gt;</content>
			</item>
		</consts>
		<blocks class_id="17" tracking_level="0" version="0">
			<count>1</count>
			<item_version>0</item_version>
			<item class_id="18" tracking_level="1" version="0" object_id="_29">
				<Obj>
					<type>3</type>
					<id>46</id>
					<name>myproject</name>
					<fileName></fileName>
					<fileDirectory></fileDirectory>
					<lineNumber>0</lineNumber>
					<contextFuncName></contextFuncName>
					<inlineStackInfo>
						<count>0</count>
						<item_version>0</item_version>
					</inlineStackInfo>
					<originalName></originalName>
					<rtlName></rtlName>
					<coreName></coreName>
				</Obj>
				<node_objs>
					<count>21</count>
					<item_version>0</item_version>
					<item>25</item>
					<item>26</item>
					<item>27</item>
					<item>28</item>
					<item>29</item>
					<item>30</item>
					<item>31</item>
					<item>32</item>
					<item>33</item>
					<item>34</item>
					<item>35</item>
					<item>36</item>
					<item>37</item>
					<item>38</item>
					<item>39</item>
					<item>40</item>
					<item>41</item>
					<item>42</item>
					<item>43</item>
					<item>44</item>
					<item>45</item>
				</node_objs>
			</item>
		</blocks>
		<edges class_id="19" tracking_level="0" version="0">
			<count>51</count>
			<item_version>0</item_version>
			<item class_id="20" tracking_level="1" version="0" object_id="_30">
				<id>48</id>
				<edge_type>1</edge_type>
				<source_obj>47</source_obj>
				<sink_obj>25</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_31">
				<id>49</id>
				<edge_type>1</edge_type>
				<source_obj>1</source_obj>
				<sink_obj>25</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_32">
				<id>50</id>
				<edge_type>1</edge_type>
				<source_obj>25</source_obj>
				<sink_obj>26</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_33">
				<id>51</id>
				<edge_type>1</edge_type>
				<source_obj>25</source_obj>
				<sink_obj>27</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_34">
				<id>52</id>
				<edge_type>1</edge_type>
				<source_obj>25</source_obj>
				<sink_obj>28</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_35">
				<id>53</id>
				<edge_type>1</edge_type>
				<source_obj>25</source_obj>
				<sink_obj>29</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_36">
				<id>54</id>
				<edge_type>1</edge_type>
				<source_obj>25</source_obj>
				<sink_obj>30</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_37">
				<id>56</id>
				<edge_type>1</edge_type>
				<source_obj>55</source_obj>
				<sink_obj>31</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_38">
				<id>57</id>
				<edge_type>1</edge_type>
				<source_obj>26</source_obj>
				<sink_obj>31</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_39">
				<id>58</id>
				<edge_type>1</edge_type>
				<source_obj>27</source_obj>
				<sink_obj>31</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_40">
				<id>59</id>
				<edge_type>1</edge_type>
				<source_obj>28</source_obj>
				<sink_obj>31</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_41">
				<id>60</id>
				<edge_type>1</edge_type>
				<source_obj>29</source_obj>
				<sink_obj>31</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_42">
				<id>61</id>
				<edge_type>1</edge_type>
				<source_obj>30</source_obj>
				<sink_obj>31</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_43">
				<id>62</id>
				<edge_type>1</edge_type>
				<source_obj>31</source_obj>
				<sink_obj>32</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_44">
				<id>63</id>
				<edge_type>1</edge_type>
				<source_obj>31</source_obj>
				<sink_obj>33</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_45">
				<id>64</id>
				<edge_type>1</edge_type>
				<source_obj>31</source_obj>
				<sink_obj>34</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_46">
				<id>65</id>
				<edge_type>1</edge_type>
				<source_obj>31</source_obj>
				<sink_obj>35</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_47">
				<id>66</id>
				<edge_type>1</edge_type>
				<source_obj>31</source_obj>
				<sink_obj>36</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_48">
				<id>68</id>
				<edge_type>1</edge_type>
				<source_obj>67</source_obj>
				<sink_obj>37</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_49">
				<id>69</id>
				<edge_type>1</edge_type>
				<source_obj>32</source_obj>
				<sink_obj>37</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_50">
				<id>70</id>
				<edge_type>1</edge_type>
				<source_obj>33</source_obj>
				<sink_obj>37</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_51">
				<id>71</id>
				<edge_type>1</edge_type>
				<source_obj>34</source_obj>
				<sink_obj>37</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_52">
				<id>72</id>
				<edge_type>1</edge_type>
				<source_obj>35</source_obj>
				<sink_obj>37</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_53">
				<id>73</id>
				<edge_type>1</edge_type>
				<source_obj>36</source_obj>
				<sink_obj>37</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_54">
				<id>74</id>
				<edge_type>1</edge_type>
				<source_obj>37</source_obj>
				<sink_obj>38</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_55">
				<id>75</id>
				<edge_type>1</edge_type>
				<source_obj>37</source_obj>
				<sink_obj>39</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_56">
				<id>76</id>
				<edge_type>1</edge_type>
				<source_obj>37</source_obj>
				<sink_obj>40</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_57">
				<id>77</id>
				<edge_type>1</edge_type>
				<source_obj>37</source_obj>
				<sink_obj>41</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_58">
				<id>78</id>
				<edge_type>1</edge_type>
				<source_obj>37</source_obj>
				<sink_obj>42</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_59">
				<id>80</id>
				<edge_type>1</edge_type>
				<source_obj>79</source_obj>
				<sink_obj>43</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_60">
				<id>81</id>
				<edge_type>1</edge_type>
				<source_obj>38</source_obj>
				<sink_obj>43</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_61">
				<id>82</id>
				<edge_type>1</edge_type>
				<source_obj>39</source_obj>
				<sink_obj>43</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_62">
				<id>83</id>
				<edge_type>1</edge_type>
				<source_obj>40</source_obj>
				<sink_obj>43</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_63">
				<id>84</id>
				<edge_type>1</edge_type>
				<source_obj>41</source_obj>
				<sink_obj>43</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_64">
				<id>85</id>
				<edge_type>1</edge_type>
				<source_obj>42</source_obj>
				<sink_obj>43</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_65">
				<id>87</id>
				<edge_type>1</edge_type>
				<source_obj>86</source_obj>
				<sink_obj>44</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_66">
				<id>88</id>
				<edge_type>1</edge_type>
				<source_obj>43</source_obj>
				<sink_obj>44</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_67">
				<id>89</id>
				<edge_type>1</edge_type>
				<source_obj>2</source_obj>
				<sink_obj>44</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_68">
				<id>90</id>
				<edge_type>1</edge_type>
				<source_obj>4</source_obj>
				<sink_obj>25</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_69">
				<id>91</id>
				<edge_type>1</edge_type>
				<source_obj>5</source_obj>
				<sink_obj>25</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_70">
				<id>92</id>
				<edge_type>1</edge_type>
				<source_obj>6</source_obj>
				<sink_obj>25</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_71">
				<id>93</id>
				<edge_type>1</edge_type>
				<source_obj>7</source_obj>
				<sink_obj>25</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_72">
				<id>94</id>
				<edge_type>1</edge_type>
				<source_obj>8</source_obj>
				<sink_obj>25</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_73">
				<id>95</id>
				<edge_type>1</edge_type>
				<source_obj>10</source_obj>
				<sink_obj>25</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_74">
				<id>96</id>
				<edge_type>1</edge_type>
				<source_obj>12</source_obj>
				<sink_obj>25</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_75">
				<id>97</id>
				<edge_type>1</edge_type>
				<source_obj>13</source_obj>
				<sink_obj>25</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_76">
				<id>98</id>
				<edge_type>1</edge_type>
				<source_obj>14</source_obj>
				<sink_obj>25</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_77">
				<id>99</id>
				<edge_type>1</edge_type>
				<source_obj>15</source_obj>
				<sink_obj>25</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_78">
				<id>100</id>
				<edge_type>1</edge_type>
				<source_obj>16</source_obj>
				<sink_obj>25</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_79">
				<id>101</id>
				<edge_type>1</edge_type>
				<source_obj>17</source_obj>
				<sink_obj>25</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_80">
				<id>102</id>
				<edge_type>1</edge_type>
				<source_obj>18</source_obj>
				<sink_obj>44</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
		</edges>
	</cdfg>
	<cdfg_regions class_id="21" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="22" tracking_level="1" version="0" object_id="_81">
			<mId>1</mId>
			<mTag>myproject</mTag>
			<mType>0</mType>
			<sub_regions>
				<count>0</count>
				<item_version>0</item_version>
			</sub_regions>
			<basic_blocks>
				<count>1</count>
				<item_version>0</item_version>
				<item>46</item>
			</basic_blocks>
			<mII>-1</mII>
			<mDepth>-1</mDepth>
			<mMinTripCount>-1</mMinTripCount>
			<mMaxTripCount>-1</mMaxTripCount>
			<mMinLatency>226</mMinLatency>
			<mMaxLatency>226</mMaxLatency>
			<mIsDfPipe>1</mIsDfPipe>
			<mDfPipe class_id="23" tracking_level="1" version="0" object_id="_82">
				<port_list class_id="24" tracking_level="0" version="0">
					<count>0</count>
					<item_version>0</item_version>
				</port_list>
				<process_list class_id="25" tracking_level="0" version="0">
					<count>5</count>
					<item_version>0</item_version>
					<item class_id="26" tracking_level="1" version="0" object_id="_83">
						<type>0</type>
						<name>gru_stack_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_U0</name>
						<ssdmobj_id>25</ssdmobj_id>
						<pins class_id="27" tracking_level="0" version="0">
							<count>18</count>
							<item_version>0</item_version>
							<item class_id="28" tracking_level="1" version="0" object_id="_84">
								<port class_id="29" tracking_level="1" version="0" object_id="_85">
									<name>data_V</name>
									<dir>3</dir>
									<type>0</type>
								</port>
								<inst class_id="30" tracking_level="1" version="0" object_id="_86">
									<type>0</type>
									<name>gru_stack_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_U0</name>
									<ssdmobj_id>25</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_87">
								<port class_id_reference="29" object_id="_88">
									<name>h_state_V_0</name>
									<dir>3</dir>
									<type>2</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_86"></inst>
							</item>
							<item class_id_reference="28" object_id="_89">
								<port class_id_reference="29" object_id="_90">
									<name>h_state_V_1</name>
									<dir>3</dir>
									<type>2</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_86"></inst>
							</item>
							<item class_id_reference="28" object_id="_91">
								<port class_id_reference="29" object_id="_92">
									<name>h_state_V_2</name>
									<dir>3</dir>
									<type>2</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_86"></inst>
							</item>
							<item class_id_reference="28" object_id="_93">
								<port class_id_reference="29" object_id="_94">
									<name>h_state_V_3</name>
									<dir>3</dir>
									<type>2</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_86"></inst>
							</item>
							<item class_id_reference="28" object_id="_95">
								<port class_id_reference="29" object_id="_96">
									<name>h_state_V_4</name>
									<dir>3</dir>
									<type>2</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_86"></inst>
							</item>
							<item class_id_reference="28" object_id="_97">
								<port class_id_reference="29" object_id="_98">
									<name>sigmoid_table4</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_86"></inst>
							</item>
							<item class_id_reference="28" object_id="_99">
								<port class_id_reference="29" object_id="_100">
									<name>tanh_table2</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_86"></inst>
							</item>
							<item class_id_reference="28" object_id="_101">
								<port class_id_reference="29" object_id="_102">
									<name>h_state_V114_0</name>
									<dir>3</dir>
									<type>2</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_86"></inst>
							</item>
							<item class_id_reference="28" object_id="_103">
								<port class_id_reference="29" object_id="_104">
									<name>h_state_V114_1</name>
									<dir>3</dir>
									<type>2</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_86"></inst>
							</item>
							<item class_id_reference="28" object_id="_105">
								<port class_id_reference="29" object_id="_106">
									<name>h_state_V114_2</name>
									<dir>3</dir>
									<type>2</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_86"></inst>
							</item>
							<item class_id_reference="28" object_id="_107">
								<port class_id_reference="29" object_id="_108">
									<name>h_state_V114_3</name>
									<dir>3</dir>
									<type>2</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_86"></inst>
							</item>
							<item class_id_reference="28" object_id="_109">
								<port class_id_reference="29" object_id="_110">
									<name>h_state_V114_4</name>
									<dir>3</dir>
									<type>2</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_86"></inst>
							</item>
							<item class_id_reference="28" object_id="_111">
								<port class_id_reference="29" object_id="_112">
									<name>ap_return</name>
									<dir>3</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_86"></inst>
							</item>
							<item class_id_reference="28" object_id="_113">
								<port class_id_reference="29" object_id="_114">
									<name>ap_return</name>
									<dir>3</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_86"></inst>
							</item>
							<item class_id_reference="28" object_id="_115">
								<port class_id_reference="29" object_id="_116">
									<name>ap_return</name>
									<dir>3</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_86"></inst>
							</item>
							<item class_id_reference="28" object_id="_117">
								<port class_id_reference="29" object_id="_118">
									<name>ap_return</name>
									<dir>3</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_86"></inst>
							</item>
							<item class_id_reference="28" object_id="_119">
								<port class_id_reference="29" object_id="_120">
									<name>ap_return</name>
									<dir>3</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_86"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_121">
						<type>0</type>
						<name>dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_U0</name>
						<ssdmobj_id>31</ssdmobj_id>
						<pins>
							<count>10</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_122">
								<port class_id_reference="29" object_id="_123">
									<name>data_0_V_read</name>
									<dir>3</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id="_124">
									<type>0</type>
									<name>dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_U0</name>
									<ssdmobj_id>31</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_125">
								<port class_id_reference="29" object_id="_126">
									<name>data_1_V_read</name>
									<dir>3</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_124"></inst>
							</item>
							<item class_id_reference="28" object_id="_127">
								<port class_id_reference="29" object_id="_128">
									<name>data_2_V_read</name>
									<dir>3</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_124"></inst>
							</item>
							<item class_id_reference="28" object_id="_129">
								<port class_id_reference="29" object_id="_130">
									<name>data_3_V_read</name>
									<dir>3</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_124"></inst>
							</item>
							<item class_id_reference="28" object_id="_131">
								<port class_id_reference="29" object_id="_132">
									<name>data_4_V_read</name>
									<dir>3</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_124"></inst>
							</item>
							<item class_id_reference="28" object_id="_133">
								<port class_id_reference="29" object_id="_134">
									<name>ap_return</name>
									<dir>3</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_124"></inst>
							</item>
							<item class_id_reference="28" object_id="_135">
								<port class_id_reference="29" object_id="_136">
									<name>ap_return</name>
									<dir>3</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_124"></inst>
							</item>
							<item class_id_reference="28" object_id="_137">
								<port class_id_reference="29" object_id="_138">
									<name>ap_return</name>
									<dir>3</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_124"></inst>
							</item>
							<item class_id_reference="28" object_id="_139">
								<port class_id_reference="29" object_id="_140">
									<name>ap_return</name>
									<dir>3</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_124"></inst>
							</item>
							<item class_id_reference="28" object_id="_141">
								<port class_id_reference="29" object_id="_142">
									<name>ap_return</name>
									<dir>3</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_124"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_143">
						<type>0</type>
						<name>relu_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_relu_config4_U0</name>
						<ssdmobj_id>37</ssdmobj_id>
						<pins>
							<count>10</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_144">
								<port class_id_reference="29" object_id="_145">
									<name>data_0_V_read</name>
									<dir>3</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id="_146">
									<type>0</type>
									<name>relu_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_relu_config4_U0</name>
									<ssdmobj_id>37</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_147">
								<port class_id_reference="29" object_id="_148">
									<name>data_1_V_read</name>
									<dir>3</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_146"></inst>
							</item>
							<item class_id_reference="28" object_id="_149">
								<port class_id_reference="29" object_id="_150">
									<name>data_2_V_read</name>
									<dir>3</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_146"></inst>
							</item>
							<item class_id_reference="28" object_id="_151">
								<port class_id_reference="29" object_id="_152">
									<name>data_3_V_read</name>
									<dir>3</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_146"></inst>
							</item>
							<item class_id_reference="28" object_id="_153">
								<port class_id_reference="29" object_id="_154">
									<name>data_4_V_read</name>
									<dir>3</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_146"></inst>
							</item>
							<item class_id_reference="28" object_id="_155">
								<port class_id_reference="29" object_id="_156">
									<name>ap_return</name>
									<dir>3</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_146"></inst>
							</item>
							<item class_id_reference="28" object_id="_157">
								<port class_id_reference="29" object_id="_158">
									<name>ap_return</name>
									<dir>3</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_146"></inst>
							</item>
							<item class_id_reference="28" object_id="_159">
								<port class_id_reference="29" object_id="_160">
									<name>ap_return</name>
									<dir>3</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_146"></inst>
							</item>
							<item class_id_reference="28" object_id="_161">
								<port class_id_reference="29" object_id="_162">
									<name>ap_return</name>
									<dir>3</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_146"></inst>
							</item>
							<item class_id_reference="28" object_id="_163">
								<port class_id_reference="29" object_id="_164">
									<name>ap_return</name>
									<dir>3</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_146"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_165">
						<type>0</type>
						<name>dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config5_U0</name>
						<ssdmobj_id>43</ssdmobj_id>
						<pins>
							<count>6</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_166">
								<port class_id_reference="29" object_id="_167">
									<name>data_0_V_read</name>
									<dir>3</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id="_168">
									<type>0</type>
									<name>dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config5_U0</name>
									<ssdmobj_id>43</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_169">
								<port class_id_reference="29" object_id="_170">
									<name>data_1_V_read</name>
									<dir>3</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_168"></inst>
							</item>
							<item class_id_reference="28" object_id="_171">
								<port class_id_reference="29" object_id="_172">
									<name>data_2_V_read</name>
									<dir>3</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_168"></inst>
							</item>
							<item class_id_reference="28" object_id="_173">
								<port class_id_reference="29" object_id="_174">
									<name>data_3_V_read</name>
									<dir>3</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_168"></inst>
							</item>
							<item class_id_reference="28" object_id="_175">
								<port class_id_reference="29" object_id="_176">
									<name>data_4_V_read</name>
									<dir>3</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_168"></inst>
							</item>
							<item class_id_reference="28" object_id="_177">
								<port class_id_reference="29" object_id="_178">
									<name>ap_return</name>
									<dir>3</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_168"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_179">
						<type>0</type>
						<name>sigmoid_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_sigmoid_config6_U0</name>
						<ssdmobj_id>44</ssdmobj_id>
						<pins>
							<count>3</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_180">
								<port class_id_reference="29" object_id="_181">
									<name>data_V_read</name>
									<dir>3</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id="_182">
									<type>0</type>
									<name>sigmoid_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_sigmoid_config6_U0</name>
									<ssdmobj_id>44</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_183">
								<port class_id_reference="29" object_id="_184">
									<name>res_V</name>
									<dir>3</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_182"></inst>
							</item>
							<item class_id_reference="28" object_id="_185">
								<port class_id_reference="29" object_id="_186">
									<name>sigmoid_table1</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_182"></inst>
							</item>
						</pins>
					</item>
				</process_list>
				<channel_list class_id="31" tracking_level="0" version="0">
					<count>16</count>
					<item_version>0</item_version>
					<item class_id="32" tracking_level="1" version="0" object_id="_187">
						<type>1</type>
						<name>layer2_out_0_V</name>
						<ssdmobj_id>26</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>18</bitwidth>
						<source class_id_reference="28" object_id="_188">
							<port class_id_reference="29" object_id="_189">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_86"></inst>
						</source>
						<sink class_id_reference="28" object_id="_190">
							<port class_id_reference="29" object_id="_191">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_124"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_192">
						<type>1</type>
						<name>layer2_out_1_V</name>
						<ssdmobj_id>27</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>18</bitwidth>
						<source class_id_reference="28" object_id="_193">
							<port class_id_reference="29" object_id="_194">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_86"></inst>
						</source>
						<sink class_id_reference="28" object_id="_195">
							<port class_id_reference="29" object_id="_196">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_124"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_197">
						<type>1</type>
						<name>layer2_out_2_V</name>
						<ssdmobj_id>28</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>18</bitwidth>
						<source class_id_reference="28" object_id="_198">
							<port class_id_reference="29" object_id="_199">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_86"></inst>
						</source>
						<sink class_id_reference="28" object_id="_200">
							<port class_id_reference="29" object_id="_201">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_124"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_202">
						<type>1</type>
						<name>layer2_out_3_V</name>
						<ssdmobj_id>29</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>18</bitwidth>
						<source class_id_reference="28" object_id="_203">
							<port class_id_reference="29" object_id="_204">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_86"></inst>
						</source>
						<sink class_id_reference="28" object_id="_205">
							<port class_id_reference="29" object_id="_206">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_124"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_207">
						<type>1</type>
						<name>layer2_out_4_V</name>
						<ssdmobj_id>30</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>18</bitwidth>
						<source class_id_reference="28" object_id="_208">
							<port class_id_reference="29" object_id="_209">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_86"></inst>
						</source>
						<sink class_id_reference="28" object_id="_210">
							<port class_id_reference="29" object_id="_211">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_124"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_212">
						<type>1</type>
						<name>layer3_out_0_V</name>
						<ssdmobj_id>32</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>18</bitwidth>
						<source class_id_reference="28" object_id="_213">
							<port class_id_reference="29" object_id="_214">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_124"></inst>
						</source>
						<sink class_id_reference="28" object_id="_215">
							<port class_id_reference="29" object_id="_216">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_146"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_217">
						<type>1</type>
						<name>layer3_out_1_V</name>
						<ssdmobj_id>33</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>18</bitwidth>
						<source class_id_reference="28" object_id="_218">
							<port class_id_reference="29" object_id="_219">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_124"></inst>
						</source>
						<sink class_id_reference="28" object_id="_220">
							<port class_id_reference="29" object_id="_221">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_146"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_222">
						<type>1</type>
						<name>layer3_out_2_V</name>
						<ssdmobj_id>34</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>18</bitwidth>
						<source class_id_reference="28" object_id="_223">
							<port class_id_reference="29" object_id="_224">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_124"></inst>
						</source>
						<sink class_id_reference="28" object_id="_225">
							<port class_id_reference="29" object_id="_226">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_146"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_227">
						<type>1</type>
						<name>layer3_out_3_V</name>
						<ssdmobj_id>35</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>18</bitwidth>
						<source class_id_reference="28" object_id="_228">
							<port class_id_reference="29" object_id="_229">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_124"></inst>
						</source>
						<sink class_id_reference="28" object_id="_230">
							<port class_id_reference="29" object_id="_231">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_146"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_232">
						<type>1</type>
						<name>layer3_out_4_V</name>
						<ssdmobj_id>36</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>18</bitwidth>
						<source class_id_reference="28" object_id="_233">
							<port class_id_reference="29" object_id="_234">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_124"></inst>
						</source>
						<sink class_id_reference="28" object_id="_235">
							<port class_id_reference="29" object_id="_236">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_146"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_237">
						<type>1</type>
						<name>layer4_out_0_V</name>
						<ssdmobj_id>38</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>17</bitwidth>
						<source class_id_reference="28" object_id="_238">
							<port class_id_reference="29" object_id="_239">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_146"></inst>
						</source>
						<sink class_id_reference="28" object_id="_240">
							<port class_id_reference="29" object_id="_241">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_168"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_242">
						<type>1</type>
						<name>layer4_out_1_V</name>
						<ssdmobj_id>39</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>17</bitwidth>
						<source class_id_reference="28" object_id="_243">
							<port class_id_reference="29" object_id="_244">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_146"></inst>
						</source>
						<sink class_id_reference="28" object_id="_245">
							<port class_id_reference="29" object_id="_246">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_168"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_247">
						<type>1</type>
						<name>layer4_out_2_V</name>
						<ssdmobj_id>40</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>17</bitwidth>
						<source class_id_reference="28" object_id="_248">
							<port class_id_reference="29" object_id="_249">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_146"></inst>
						</source>
						<sink class_id_reference="28" object_id="_250">
							<port class_id_reference="29" object_id="_251">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_168"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_252">
						<type>1</type>
						<name>layer4_out_3_V</name>
						<ssdmobj_id>41</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>17</bitwidth>
						<source class_id_reference="28" object_id="_253">
							<port class_id_reference="29" object_id="_254">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_146"></inst>
						</source>
						<sink class_id_reference="28" object_id="_255">
							<port class_id_reference="29" object_id="_256">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_168"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_257">
						<type>1</type>
						<name>layer4_out_4_V</name>
						<ssdmobj_id>42</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>17</bitwidth>
						<source class_id_reference="28" object_id="_258">
							<port class_id_reference="29" object_id="_259">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_146"></inst>
						</source>
						<sink class_id_reference="28" object_id="_260">
							<port class_id_reference="29" object_id="_261">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_168"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_262">
						<type>1</type>
						<name>layer5_out_0_V</name>
						<ssdmobj_id>43</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>18</bitwidth>
						<source class_id_reference="28" object_id="_263">
							<port class_id_reference="29" object_id="_264">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_168"></inst>
						</source>
						<sink class_id_reference="28" object_id="_265">
							<port class_id_reference="29" object_id="_266">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_182"></inst>
						</sink>
					</item>
				</channel_list>
				<net_list class_id="33" tracking_level="0" version="0">
					<count>0</count>
					<item_version>0</item_version>
				</net_list>
			</mDfPipe>
		</item>
	</cdfg_regions>
	<fsm class_id="34" tracking_level="1" version="0" object_id="_267">
		<states class_id="35" tracking_level="0" version="0">
			<count>8</count>
			<item_version>0</item_version>
			<item class_id="36" tracking_level="1" version="0" object_id="_268">
				<id>1</id>
				<operations class_id="37" tracking_level="0" version="0">
					<count>1</count>
					<item_version>0</item_version>
					<item class_id="38" tracking_level="1" version="0" object_id="_269">
						<id>25</id>
						<stage>2</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_270">
				<id>2</id>
				<operations>
					<count>7</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_271">
						<id>25</id>
						<stage>1</stage>
						<latency>2</latency>
					</item>
					<item class_id_reference="38" object_id="_272">
						<id>26</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_273">
						<id>27</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_274">
						<id>28</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_275">
						<id>29</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_276">
						<id>30</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_277">
						<id>31</id>
						<stage>2</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_278">
				<id>3</id>
				<operations>
					<count>6</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_279">
						<id>31</id>
						<stage>1</stage>
						<latency>2</latency>
					</item>
					<item class_id_reference="38" object_id="_280">
						<id>32</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_281">
						<id>33</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_282">
						<id>34</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_283">
						<id>35</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_284">
						<id>36</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_285">
				<id>4</id>
				<operations>
					<count>6</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_286">
						<id>37</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_287">
						<id>38</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_288">
						<id>39</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_289">
						<id>40</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_290">
						<id>41</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_291">
						<id>42</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_292">
				<id>5</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_293">
						<id>43</id>
						<stage>2</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_294">
				<id>6</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_295">
						<id>43</id>
						<stage>1</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_296">
				<id>7</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_297">
						<id>44</id>
						<stage>2</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_298">
				<id>8</id>
				<operations>
					<count>8</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_299">
						<id>19</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_300">
						<id>20</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_301">
						<id>21</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_302">
						<id>22</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_303">
						<id>23</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_304">
						<id>24</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_305">
						<id>44</id>
						<stage>1</stage>
						<latency>2</latency>
					</item>
					<item class_id_reference="38" object_id="_306">
						<id>45</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
				</operations>
			</item>
		</states>
		<transitions class_id="39" tracking_level="0" version="0">
			<count>7</count>
			<item_version>0</item_version>
			<item class_id="40" tracking_level="1" version="0" object_id="_307">
				<inState>1</inState>
				<outState>2</outState>
				<condition class_id="41" tracking_level="0" version="0">
					<id>-1</id>
					<sop class_id="42" tracking_level="0" version="0">
						<count>1</count>
						<item_version>0</item_version>
						<item class_id="43" tracking_level="0" version="0">
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="40" object_id="_308">
				<inState>2</inState>
				<outState>3</outState>
				<condition>
					<id>-1</id>
					<sop>
						<count>1</count>
						<item_version>0</item_version>
						<item>
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="40" object_id="_309">
				<inState>3</inState>
				<outState>4</outState>
				<condition>
					<id>-1</id>
					<sop>
						<count>1</count>
						<item_version>0</item_version>
						<item>
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="40" object_id="_310">
				<inState>4</inState>
				<outState>5</outState>
				<condition>
					<id>-1</id>
					<sop>
						<count>1</count>
						<item_version>0</item_version>
						<item>
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="40" object_id="_311">
				<inState>5</inState>
				<outState>6</outState>
				<condition>
					<id>-1</id>
					<sop>
						<count>1</count>
						<item_version>0</item_version>
						<item>
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="40" object_id="_312">
				<inState>6</inState>
				<outState>7</outState>
				<condition>
					<id>-1</id>
					<sop>
						<count>1</count>
						<item_version>0</item_version>
						<item>
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="40" object_id="_313">
				<inState>7</inState>
				<outState>8</outState>
				<condition>
					<id>-1</id>
					<sop>
						<count>1</count>
						<item_version>0</item_version>
						<item>
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
		</transitions>
	</fsm>
	<res class_id="-1"></res>
	<node_label_latency class_id="45" tracking_level="0" version="0">
		<count>21</count>
		<item_version>0</item_version>
		<item class_id="46" tracking_level="0" version="0">
			<first>25</first>
			<second class_id="47" tracking_level="0" version="0">
				<first>0</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>26</first>
			<second>
				<first>1</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>27</first>
			<second>
				<first>1</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>28</first>
			<second>
				<first>1</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>29</first>
			<second>
				<first>1</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>30</first>
			<second>
				<first>1</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>31</first>
			<second>
				<first>1</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>32</first>
			<second>
				<first>2</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>33</first>
			<second>
				<first>2</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>34</first>
			<second>
				<first>2</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>35</first>
			<second>
				<first>2</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>36</first>
			<second>
				<first>2</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>37</first>
			<second>
				<first>3</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>38</first>
			<second>
				<first>3</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>39</first>
			<second>
				<first>3</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>40</first>
			<second>
				<first>3</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>41</first>
			<second>
				<first>3</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>42</first>
			<second>
				<first>3</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>43</first>
			<second>
				<first>4</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>44</first>
			<second>
				<first>6</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>45</first>
			<second>
				<first>7</first>
				<second>0</second>
			</second>
		</item>
	</node_label_latency>
	<bblk_ent_exit class_id="48" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="49" tracking_level="0" version="0">
			<first>46</first>
			<second class_id="50" tracking_level="0" version="0">
				<first>0</first>
				<second>7</second>
			</second>
		</item>
	</bblk_ent_exit>
	<regions class_id="51" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="52" tracking_level="1" version="0" object_id="_314">
			<region_name>myproject</region_name>
			<basic_blocks>
				<count>1</count>
				<item_version>0</item_version>
				<item>46</item>
			</basic_blocks>
			<nodes>
				<count>27</count>
				<item_version>0</item_version>
				<item>19</item>
				<item>20</item>
				<item>21</item>
				<item>22</item>
				<item>23</item>
				<item>24</item>
				<item>25</item>
				<item>26</item>
				<item>27</item>
				<item>28</item>
				<item>29</item>
				<item>30</item>
				<item>31</item>
				<item>32</item>
				<item>33</item>
				<item>34</item>
				<item>35</item>
				<item>36</item>
				<item>37</item>
				<item>38</item>
				<item>39</item>
				<item>40</item>
				<item>41</item>
				<item>42</item>
				<item>43</item>
				<item>44</item>
				<item>45</item>
			</nodes>
			<anchor_node>-1</anchor_node>
			<region_type>16</region_type>
			<interval>0</interval>
			<pipe_depth>0</pipe_depth>
		</item>
	</regions>
	<dp_fu_nodes class_id="53" tracking_level="0" version="0">
		<count>20</count>
		<item_version>0</item_version>
		<item class_id="54" tracking_level="0" version="0">
			<first>58</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>25</item>
				<item>25</item>
			</second>
		</item>
		<item>
			<first>88</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>31</item>
				<item>31</item>
			</second>
		</item>
		<item>
			<first>97</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>37</item>
			</second>
		</item>
		<item>
			<first>106</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>44</item>
				<item>44</item>
			</second>
		</item>
		<item>
			<first>115</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>43</item>
				<item>43</item>
			</second>
		</item>
		<item>
			<first>124</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>26</item>
			</second>
		</item>
		<item>
			<first>129</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>27</item>
			</second>
		</item>
		<item>
			<first>134</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>28</item>
			</second>
		</item>
		<item>
			<first>139</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>29</item>
			</second>
		</item>
		<item>
			<first>144</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>30</item>
			</second>
		</item>
		<item>
			<first>149</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>32</item>
			</second>
		</item>
		<item>
			<first>153</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>33</item>
			</second>
		</item>
		<item>
			<first>157</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>34</item>
			</second>
		</item>
		<item>
			<first>161</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>35</item>
			</second>
		</item>
		<item>
			<first>165</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>36</item>
			</second>
		</item>
		<item>
			<first>169</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>38</item>
			</second>
		</item>
		<item>
			<first>173</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>39</item>
			</second>
		</item>
		<item>
			<first>177</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>40</item>
			</second>
		</item>
		<item>
			<first>181</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>41</item>
			</second>
		</item>
		<item>
			<first>185</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>42</item>
			</second>
		</item>
	</dp_fu_nodes>
	<dp_fu_nodes_expression class_id="56" tracking_level="0" version="0">
		<count>15</count>
		<item_version>0</item_version>
		<item class_id="57" tracking_level="0" version="0">
			<first>layer2_out_0_V_fu_124</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>26</item>
			</second>
		</item>
		<item>
			<first>layer2_out_1_V_fu_129</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>27</item>
			</second>
		</item>
		<item>
			<first>layer2_out_2_V_fu_134</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>28</item>
			</second>
		</item>
		<item>
			<first>layer2_out_3_V_fu_139</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>29</item>
			</second>
		</item>
		<item>
			<first>layer2_out_4_V_fu_144</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>30</item>
			</second>
		</item>
		<item>
			<first>layer3_out_0_V_fu_149</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>32</item>
			</second>
		</item>
		<item>
			<first>layer3_out_1_V_fu_153</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>33</item>
			</second>
		</item>
		<item>
			<first>layer3_out_2_V_fu_157</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>34</item>
			</second>
		</item>
		<item>
			<first>layer3_out_3_V_fu_161</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>35</item>
			</second>
		</item>
		<item>
			<first>layer3_out_4_V_fu_165</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>36</item>
			</second>
		</item>
		<item>
			<first>layer4_out_0_V_fu_169</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>38</item>
			</second>
		</item>
		<item>
			<first>layer4_out_1_V_fu_173</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>39</item>
			</second>
		</item>
		<item>
			<first>layer4_out_2_V_fu_177</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>40</item>
			</second>
		</item>
		<item>
			<first>layer4_out_3_V_fu_181</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>41</item>
			</second>
		</item>
		<item>
			<first>layer4_out_4_V_fu_185</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>42</item>
			</second>
		</item>
	</dp_fu_nodes_expression>
	<dp_fu_nodes_module>
		<count>5</count>
		<item_version>0</item_version>
		<item>
			<first>call_ret_relu_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_relu_config4_s_fu_97</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>37</item>
			</second>
		</item>
		<item>
			<first>grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s_fu_88</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>31</item>
				<item>31</item>
			</second>
		</item>
		<item>
			<first>grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config5_s_fu_115</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>43</item>
				<item>43</item>
			</second>
		</item>
		<item>
			<first>grp_gru_stack_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s_fu_58</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>25</item>
				<item>25</item>
			</second>
		</item>
		<item>
			<first>grp_sigmoid_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_sigmoid_config6_s_fu_106</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>44</item>
				<item>44</item>
			</second>
		</item>
	</dp_fu_nodes_module>
	<dp_fu_nodes_io>
		<count>0</count>
		<item_version>0</item_version>
	</dp_fu_nodes_io>
	<return_ports>
		<count>0</count>
		<item_version>0</item_version>
	</return_ports>
	<dp_mem_port_nodes class_id="58" tracking_level="0" version="0">
		<count>3</count>
		<item_version>0</item_version>
		<item class_id="59" tracking_level="0" version="0">
			<first class_id="60" tracking_level="0" version="0">
				<first>sigmoid_table1</first>
				<second>100</second>
			</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>44</item>
			</second>
		</item>
		<item>
			<first>
				<first>sigmoid_table4</first>
				<second>100</second>
			</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>25</item>
			</second>
		</item>
		<item>
			<first>
				<first>tanh_table2</first>
				<second>100</second>
			</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>25</item>
			</second>
		</item>
	</dp_mem_port_nodes>
	<dp_reg_nodes>
		<count>16</count>
		<item_version>0</item_version>
		<item>
			<first>189</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>26</item>
			</second>
		</item>
		<item>
			<first>194</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>27</item>
			</second>
		</item>
		<item>
			<first>199</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>28</item>
			</second>
		</item>
		<item>
			<first>204</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>29</item>
			</second>
		</item>
		<item>
			<first>209</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>30</item>
			</second>
		</item>
		<item>
			<first>214</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>32</item>
			</second>
		</item>
		<item>
			<first>219</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>33</item>
			</second>
		</item>
		<item>
			<first>224</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>34</item>
			</second>
		</item>
		<item>
			<first>229</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>35</item>
			</second>
		</item>
		<item>
			<first>234</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>36</item>
			</second>
		</item>
		<item>
			<first>239</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>38</item>
			</second>
		</item>
		<item>
			<first>244</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>39</item>
			</second>
		</item>
		<item>
			<first>249</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>40</item>
			</second>
		</item>
		<item>
			<first>254</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>41</item>
			</second>
		</item>
		<item>
			<first>259</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>42</item>
			</second>
		</item>
		<item>
			<first>264</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>43</item>
			</second>
		</item>
	</dp_reg_nodes>
	<dp_regname_nodes>
		<count>16</count>
		<item_version>0</item_version>
		<item>
			<first>layer2_out_0_V_reg_189</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>26</item>
			</second>
		</item>
		<item>
			<first>layer2_out_1_V_reg_194</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>27</item>
			</second>
		</item>
		<item>
			<first>layer2_out_2_V_reg_199</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>28</item>
			</second>
		</item>
		<item>
			<first>layer2_out_3_V_reg_204</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>29</item>
			</second>
		</item>
		<item>
			<first>layer2_out_4_V_reg_209</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>30</item>
			</second>
		</item>
		<item>
			<first>layer3_out_0_V_reg_214</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>32</item>
			</second>
		</item>
		<item>
			<first>layer3_out_1_V_reg_219</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>33</item>
			</second>
		</item>
		<item>
			<first>layer3_out_2_V_reg_224</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>34</item>
			</second>
		</item>
		<item>
			<first>layer3_out_3_V_reg_229</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>35</item>
			</second>
		</item>
		<item>
			<first>layer3_out_4_V_reg_234</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>36</item>
			</second>
		</item>
		<item>
			<first>layer4_out_0_V_reg_239</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>38</item>
			</second>
		</item>
		<item>
			<first>layer4_out_1_V_reg_244</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>39</item>
			</second>
		</item>
		<item>
			<first>layer4_out_2_V_reg_249</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>40</item>
			</second>
		</item>
		<item>
			<first>layer4_out_3_V_reg_254</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>41</item>
			</second>
		</item>
		<item>
			<first>layer4_out_4_V_reg_259</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>42</item>
			</second>
		</item>
		<item>
			<first>layer5_out_0_V_reg_264</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>43</item>
			</second>
		</item>
	</dp_regname_nodes>
	<dp_reg_phi>
		<count>0</count>
		<item_version>0</item_version>
	</dp_reg_phi>
	<dp_regname_phi>
		<count>0</count>
		<item_version>0</item_version>
	</dp_regname_phi>
	<dp_port_io_nodes class_id="61" tracking_level="0" version="0">
		<count>2</count>
		<item_version>0</item_version>
		<item class_id="62" tracking_level="0" version="0">
			<first>layer1_input_V</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>
					<first>call</first>
					<second>
						<count>1</count>
						<item_version>0</item_version>
						<item>25</item>
					</second>
				</item>
			</second>
		</item>
		<item>
			<first>layer6_out_0_V</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>
					<first>call</first>
					<second>
						<count>1</count>
						<item_version>0</item_version>
						<item>44</item>
					</second>
				</item>
			</second>
		</item>
	</dp_port_io_nodes>
	<port2core class_id="63" tracking_level="0" version="0">
		<count>0</count>
		<item_version>0</item_version>
	</port2core>
	<node2core>
		<count>16</count>
		<item_version>0</item_version>
		<item class_id="64" tracking_level="0" version="0">
			<first>26</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>27</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>28</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>29</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>30</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>32</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>33</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>34</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>35</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>36</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>38</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>39</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>40</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>41</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>42</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>43</first>
			<second>FIFO</second>
		</item>
	</node2core>
</syndb>
</boost_serialization>
