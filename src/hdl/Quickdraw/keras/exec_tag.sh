jupyter nbconvert $1 \
--to notebook \
--execute \
--ExecutePreprocessor.enabled=True \
--ExecutePreprocessor.skip_cells_with_tag=skip_me \
--ExecutePreprocessor.allow_errors=True \
--ExecutePreprocessor.timeout=-1 \
--ExecutePreprocessor.store_widget_state=True
